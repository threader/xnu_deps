/*
**********************************************************************
* Copyright (C) 1999-2004, International Business Machines Corporation and others. All Rights Reserved.
**********************************************************************
*   Date        Name        Description
*   10/20/99    alan        Creation.
**********************************************************************
*/

#ifndef UNICODESET_H
#define UNICODESET_H

#include "unicode/unifilt.h"
#include "unicode/unistr.h"
#include "unicode/uset.h"

U_NAMESPACE_BEGIN

class ParsePosition;
class SymbolTable;
class UVector;
class CaseEquivClass;
class RuleCharacterIterator;

/**
 * A mutable set of Unicode characters and multicharacter strings.  Objects of this class
 * represent <em>character classes</em> used in regular expressions.
 * A character specifies a subset of Unicode code points.  Legal
 * code points are U+0000 to U+10FFFF, inclusive.
 *
 * <p>The UnicodeSet class is not designed to be subclassed.
 *
 * <p><code>UnicodeSet</code> supports two APIs. The first is the
 * <em>operand</em> API that allows the caller to modify the value of
 * a <code>UnicodeSet</code> object. It conforms to Java 2's
 * <code>java.util.Set</code> interface, although
 * <code>UnicodeSet</code> does not actually implement that
 * interface. All methods of <code>Set</code> are supported, with the
 * modification that they take a character range or single character
 * instead of an <code>Object</code>, and they take a
 * <code>UnicodeSet</code> instead of a <code>Collection</code>.  The
 * operand API may be thought of in terms of boolean logic: a boolean
 * OR is implemented by <code>add</code>, a boolean AND is implemented
 * by <code>retain</code>, a boolean XOR is implemented by
 * <code>complement</code> taking an argument, and a boolean NOT is
 * implemented by <code>complement</code> with no argument.  In terms
 * of traditional set theory function names, <code>add</code> is a
 * union, <code>retain</code> is an intersection, <code>remove</code>
 * is an asymmetric difference, and <code>complement</code> with no
 * argument is a set complement with respect to the superset range
 * <code>MIN_VALUE-MAX_VALUE</code>
 *
 * <p>The second API is the
 * <code>applyPattern()</code>/<code>toPattern()</code> API from the
 * <code>java.text.Format</code>-derived classes.  Unlike the
 * methods that add characters, add categories, and control the logic
 * of the set, the method <code>applyPattern()</code> sets all
 * attributes of a <code>UnicodeSet</code> at once, based on a
 * string pattern.
 *
 * <p><b>Pattern syntax</b></p>
 *
 * Patterns are accepted by the constructors and the
 * <code>applyPattern()</code> methods and returned by the
 * <code>toPattern()</code> method.  These patterns follow a syntax
 * similar to that employed by version 8 regular expression character
 * classes.  Here are some simple examples:
 *
 * \htmlonly<blockquote>\endhtmlonly
 *   <table>
 *     <tr align="top">
 *       <td nowrap valign="top" align="left"><code>[]</code></td>
 *       <td valign="top">No characters</td>
 *     </tr><tr align="top">
 *       <td nowrap valign="top" align="left"><code>[a]</code></td>
 *       <td valign="top">The character 'a'</td>
 *     </tr><tr align="top">
 *       <td nowrap valign="top" align="left"><code>[ae]</code></td>
 *       <td valign="top">The characters 'a' and 'e'</td>
 *     </tr>
 *     <tr>
 *       <td nowrap valign="top" align="left"><code>[a-e]</code></td>
 *       <td valign="top">The characters 'a' through 'e' inclusive, in Unicode code
 *       point order</td>
 *     </tr>
 *     <tr>
 *       <td nowrap valign="top" align="left"><code>[\\u4E01]</code></td>
 *       <td valign="top">The character U+4E01</td>
 *     </tr>
 *     <tr>
 *       <td nowrap valign="top" align="left"><code>[a{ab}{ac}]</code></td>
 *       <td valign="top">The character 'a' and the multicharacter strings &quot;ab&quot; and
 *       &quot;ac&quot;</td>
 *     </tr>
 *     <tr>
 *       <td nowrap valign="top" align="left"><code>[\\p{Lu}]</code></td>
 *       <td valign="top">All characters in the general category Uppercase Letter</td>
 *     </tr>
 *   </table>
 * \htmlonly</blockquote>\endhtmlonly
 *
 * Any character may be preceded by a backslash in order to remove any special
 * meaning.  White space characters, as defined by UCharacter.isWhitespace(), are
 * ignored, unless they are escaped.
 *
 * <p>Property patterns specify a set of characters having a certain
 * property as defined by the Unicode standard.  Both the POSIX-like
 * "[:Lu:]" and the Perl-like syntax "\\p{Lu}" are recognized.  For a
 * complete list of supported property patterns, see the User's Guide
 * for UnicodeSet at
 * <a href="http://oss.software.ibm.com/icu/userguide/unicodeSet.html">
 * http://oss.software.ibm.com/icu/userguide/unicodeSet.html</a>.
 * Actual determination of property data is defined by the underlying
 * Unicode database as implemented by UCharacter.
 *
 * <p>Patterns specify individual characters, ranges of characters, and
 * Unicode property sets.  When elements are concatenated, they
 * specify their union.  To complement a set, place a '^' immediately
 * after the opening '['.  Property patterns are inverted by modifying
 * their delimiters; "[:^foo]" and "\\P{foo}".  In any other location,
 * '^' has no special meaning.
 *
 * <p>Ranges are indicated by placing two a '-' between two
 * characters, as in "a-z".  This specifies the range of all
 * characters from the left to the right, in Unicode order.  If the
 * left character is greater than or equal to the
 * right character it is a syntax error.  If a '-' occurs as the first
 * character after the opening '[' or '[^', or if it occurs as the
 * last character before the closing ']', then it is taken as a
 * literal.  Thus "[a\-b]", "[-ab]", and "[ab-]" all indicate the same
 * set of three characters, 'a', 'b', and '-'.
 *
 * <p>Sets may be intersected using the '&' operator or the asymmetric
 * set difference may be taken using the '-' operator, for example,
 * "[[:L:]&[\\u0000-\\u0FFF]]" indicates the set of all Unicode letters
 * with values less than 4096.  Operators ('&' and '|') have equal
 * precedence and bind left-to-right.  Thus
 * "[[:L:]-[a-z]-[\\u0100-\\u01FF]]" is equivalent to
 * "[[[:L:]-[a-z]]-[\\u0100-\\u01FF]]".  This only really matters for
 * difference; intersection is commutative.
 *
 * <table>
 * <tr valign=top><td nowrap><code>[a]</code><td>The set containing 'a'
 * <tr valign=top><td nowrap><code>[a-z]</code><td>The set containing 'a'
 * through 'z' and all letters in between, in Unicode order
 * <tr valign=top><td nowrap><code>[^a-z]</code><td>The set containing
 * all characters but 'a' through 'z',
 * that is, U+0000 through 'a'-1 and 'z'+1 through U+10FFFF
 * <tr valign=top><td nowrap><code>[[<em>pat1</em>][<em>pat2</em>]]</code>
 * <td>The union of sets specified by <em>pat1</em> and <em>pat2</em>
 * <tr valign=top><td nowrap><code>[[<em>pat1</em>]&[<em>pat2</em>]]</code>
 * <td>The intersection of sets specified by <em>pat1</em> and <em>pat2</em>
 * <tr valign=top><td nowrap><code>[[<em>pat1</em>]-[<em>pat2</em>]]</code>
 * <td>The asymmetric difference of sets specified by <em>pat1</em> and
 * <em>pat2</em>
 * <tr valign=top><td nowrap><code>[:Lu:] or \\p{Lu}</code>
 * <td>The set of characters having the specified
 * Unicode property; in
 * this case, Unicode uppercase letters
 * <tr valign=top><td nowrap><code>[:^Lu:] or \\P{Lu}</code>
 * <td>The set of characters <em>not</em> having the given
 * Unicode property
 * </table>
 *
 * <p><b>Warning</b>: you cannot add an empty string ("") to a UnicodeSet.</p>
 *
 * <p><b>Formal syntax</b></p>
 *
 * \htmlonly<blockquote>\endhtmlonly
 *   <table>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>pattern :=&nbsp; </code></td>
 *       <td valign="top"><code>('[' '^'? item* ']') |
 *       property</code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>item :=&nbsp; </code></td>
 *       <td valign="top"><code>char | (char '-' char) | pattern-expr<br>
 *       </code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>pattern-expr :=&nbsp; </code></td>
 *       <td valign="top"><code>pattern | pattern-expr pattern |
 *       pattern-expr op pattern<br>
 *       </code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>op :=&nbsp; </code></td>
 *       <td valign="top"><code>'&amp;' | '-'<br>
 *       </code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>special :=&nbsp; </code></td>
 *       <td valign="top"><code>'[' | ']' | '-'<br>
 *       </code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>char :=&nbsp; </code></td>
 *       <td valign="top"><em>any character that is not</em><code> special<br>
 *       | ('\' </code><em>any character</em><code>)<br>
 *       | ('\\u' hex hex hex hex)<br>
 *       </code></td>
 *     </tr>
 *     <tr align="top">
 *       <td nowrap valign="top" align="right"><code>hex :=&nbsp; </code></td>
 *       <td valign="top"><em>any character for which
 *       </em><code>Character.digit(c, 16)</code><em>
 *       returns a non-negative result</em></td>
 *     </tr>
 *     <tr>
 *       <td nowrap valign="top" align="right"><code>property :=&nbsp; </code></td>
 *       <td valign="top"><em>a Unicode property set pattern</em></td>
 *     </tr>
 *   </table>
 *   <br>
 *   <table border="1">
 *     <tr>
 *       <td>Legend: <table>
 *         <tr>
 *           <td nowrap valign="top"><code>a := b</code></td>
 *           <td width="20" valign="top">&nbsp; </td>
 *           <td valign="top"><code>a</code> may be replaced by <code>b</code> </td>
 *         </tr>
 *         <tr>
 *           <td nowrap valign="top"><code>a?</code></td>
 *           <td valign="top"></td>
 *           <td valign="top">zero or one instance of <code>a</code><br>
 *           </td>
 *         </tr>
 *         <tr>
 *           <td nowrap valign="top"><code>a*</code></td>
 *           <td valign="top"></td>
 *           <td valign="top">one or more instances of <code>a</code><br>
 *           </td>
 *         </tr>
 *         <tr>
 *           <td nowrap valign="top"><code>a | b</code></td>
 *           <td valign="top"></td>
 *           <td valign="top">either <code>a</code> or <code>b</code><br>
 *           </td>
 *         </tr>
 *         <tr>
 *           <td nowrap valign="top"><code>'a'</code></td>
 *           <td valign="top"></td>
 *           <td valign="top">the literal string between the quotes </td>
 *         </tr>
 *       </table>
 *       </td>
 *     </tr>
 *   </table>
 * \htmlonly</blockquote>\endhtmlonly
 *
 * @author Alan Liu
 * @stable ICU 2.0
 */
class U_COMMON_API UnicodeSet : public UnicodeFilter {

    int32_t len; // length of list used; 0 <= len <= capacity
    int32_t capacity; // capacity of list
    int32_t bufferCapacity; // capacity of buffer
    UChar32* list; // MUST be terminated with HIGH
    UChar32* buffer; // internal buffer, may be NULL

    UVector* strings; // maintained in sorted order

    /**
     * The pattern representation of this set.  This may not be the
     * most economical pattern.  It is the pattern supplied to
     * applyPattern(), with variables substituted and whitespace
     * removed.  For sets constructed without applyPattern(), or
     * modified using the non-pattern API, this string will be empty,
     * indicating that toPattern() must generate a pattern
     * representation from the inversion list.
     */
    UnicodeString pat;

public:

    /**
     * Minimum value that can be stored in a UnicodeSet.
     * @stable ICU 2.4
     */
#ifdef U_CYGWIN
    static U_COMMON_API const UChar32 MIN_VALUE;
#else
    static const UChar32 MIN_VALUE;
#endif

    /**
     * Maximum value that can be stored in a UnicodeSet.
     * @stable ICU 2.4
     */
#ifdef U_CYGWIN
    static U_COMMON_API const UChar32 MAX_VALUE;
#else
    static const UChar32 MAX_VALUE;
#endif

    //----------------------------------------------------------------
    // Constructors &c
    //----------------------------------------------------------------

public:

    /**
     * Constructs an empty set.
     * @stable ICU 2.0
     */
    UnicodeSet();

    /**
     * Constructs a set containing the given range. If <code>end >
     * start</code> then an empty set is created.
     *
     * @param start first character, inclusive, of range
     * @param end last character, inclusive, of range
     * @stable ICU 2.4
     */
    UnicodeSet(UChar32 start, UChar32 end);

    /**
     * Constructs a set from the given pattern.  See the class
     * description for the syntax of the pattern language.
     * @param pattern a string specifying what characters are in the set
     * @param status returns <code>U_ILLEGAL_ARGUMENT_ERROR</code> if the pattern
     * contains a syntax error.
     * @stable ICU 2.0
     */
    UnicodeSet(const UnicodeString& pattern,
               UErrorCode& status);

    /**
     * Constructs a set from the given pattern.  See the class
     * description for the syntax of the pattern language.
     * @param pattern a string specifying what characters are in the set
     * @param options bitmask for options to apply to the pattern.
     * Valid options are USET_IGNORE_SPACE and USET_CASE_INSENSITIVE.
     * @param symbols a symbol table mapping variable names to values
     * and stand-in characters to UnicodeSets; may be NULL
     * @param status returns <code>U_ILLEGAL_ARGUMENT_ERROR</code> if the pattern
     * contains a syntax error.
     * @internal
     */
    UnicodeSet(const UnicodeString& pattern,
               uint32_t options,
               const SymbolTable* symbols,
               UErrorCode& status);

    /**
     * Constructs a set from the given pattern.  See the class description
     * for the syntax of the pattern language.
     * @param pattern a string specifying what characters are in the set
     * @param pos on input, the position in pattern at which to start parsing.
     * On output, the position after the last character parsed.
     * @param options bitmask for options to apply to the pattern.
     * Valid options are USET_IGNORE_SPACE and USET_CASE_INSENSITIVE.
     * @param symbols a symbol table mapping variable names to values
     * and stand-in characters to UnicodeSets; may be NULL
     * @param status input-output error code
     * @draft ICU 2.8
     */
    UnicodeSet(const UnicodeString& pattern, ParsePosition& pos,
               uint32_t options,
               const SymbolTable* symbols,
               UErrorCode& status);

#ifdef U_USE_UNICODESET_DEPRECATES
    /**
     * Obsolete: Constructs a set from the given Unicode character category.
     * @param category an integer indicating the character category as
     * defined in uchar.h.
     * @obsolete ICU 2.6. Use a pattern with the category instead since this API will be removed in that release.
     */
    UnicodeSet(int8_t category, UErrorCode& status);
#endif

    /**
     * Constructs a set that is identical to the given UnicodeSet.
     * @stable ICU 2.0
     */
    UnicodeSet(const UnicodeSet& o);

    /**
     * Destructs the set.
     * @stable ICU 2.0
     */
    virtual ~UnicodeSet();

    /**
     * Assigns this object to be a copy of another.
     * @stable ICU 2.0
     */
    UnicodeSet& operator=(const UnicodeSet& o);

    /**
     * Compares the specified object with this set for equality.  Returns
     * <tt>true</tt> if the two sets
     * have the same size, and every member of the specified set is
     * contained in this set (or equivalently, every member of this set is
     * contained in the specified set).
     *
     * @param o set to be compared for equality with this set.
     * @return <tt>true</tt> if the specified set is equal to this set.
     * @stable ICU 2.0
     */
    virtual UBool operator==(const UnicodeSet& o) const;

    /**
     * Compares the specified object with this set for equality.  Returns
     * <tt>true</tt> if the specified set is not equal to this set.
     * @stable ICU 2.0
     */
    UBool operator!=(const UnicodeSet& o) const;

    /**
     * Returns a copy of this object.  All UnicodeFunctor objects have
     * to support cloning in order to allow classes using
     * UnicodeFunctors, such as Transliterator, to implement cloning.
     * @stable ICU 2.0
     */
    virtual UnicodeFunctor* clone() const;

    /**
     * Returns the hash code value for this set.
     *
     * @return the hash code value for this set.
     * @see Object#hashCode()
     * @stable ICU 2.0
     */
    virtual int32_t hashCode(void) const;

    //----------------------------------------------------------------
    // Public API
    //----------------------------------------------------------------

    /**
     * Make this object represent the range <code>start - end</code>.
     * If <code>end > start</code> then this object is set to an
     * an empty range.
     *
     * @param start first character in the set, inclusive
     * @param end last character in the set, inclusive
     * @stable ICU 2.4
     */
    UnicodeSet& set(UChar32 start, UChar32 end);

    /**
     * Return true if the given position, in the given pattern, appears
     * to be the start of a UnicodeSet pattern.
     * @stable ICU 2.4
     */
    static UBool resemblesPattern(const UnicodeString& pattern,
                                  int32_t pos);

    /**
     * Modifies this set to represent the set specified by the given
     * pattern, optionally ignoring white space.  See the class
     * description for the syntax of the pattern language.
     * @param pattern a string specifying what characters are in the set
     * @param status returns <code>U_ILLEGAL_ARGUMENT_ERROR</code> if the pattern
     * contains a syntax error.
     * <em> Empties the set passed before applying the pattern.</em>
     * @return a reference to this
     * @stable ICU 2.0
     */
    UnicodeSet& applyPattern(const UnicodeString& pattern,
                             UErrorCode& status);

    /**
     * Modifies this set to represent the set specified by the given
     * pattern, optionally ignoring white space.  See the class
     * description for the syntax of the pattern language.
     * @param pattern a string specifying what characters are in the set
     * @param options bitmask for options to apply to the pattern.
     * Valid options are USET_IGNORE_SPACE and USET_CASE_INSENSITIVE.
     * @param symbols a symbol table mapping variable names to
     * values and stand-ins to UnicodeSets; may be NULL
     * @param status returns <code>U_ILLEGAL_ARGUMENT_ERROR</code> if the pattern
     * contains a syntax error.
     *<em> Empties the set passed before applying the pattern.</em>
     * @return a reference to this
     * @internal
     */
    UnicodeSet& applyPattern(const UnicodeString& pattern,
                             uint32_t options,
                             const SymbolTable* symbols,
                             UErrorCode& status);

    /**
     * Parses the given pattern, starting at the given position.  The
     * character at pattern.charAt(pos.getIndex()) must be '[', or the
     * parse fails.  Parsing continues until the corresponding closing
     * ']'.  If a syntax error is encountered between the opening and
     * closing brace, the parse fails.  Upon return from a successful
     * parse, the ParsePosition is updated to point to the character
     * following the closing ']', and a StringBuffer containing a
     * pairs list for the parsed pattern is returned.  This method calls
     * itself recursively to parse embedded subpatterns.
     *<em> Empties the set passed before applying the pattern.</em>
     *
     * @param pattern the string containing the pattern to be parsed.
     * The portion of the string from pos.getIndex(), which must be a
     * '[', to the corresponding closing ']', is parsed.
     * @param pos upon entry, the position at which to being parsing.
     * The character at pattern.charAt(pos.getIndex()) must be a '['.
     * Upon return from a successful parse, pos.getIndex() is either
     * the character after the closing ']' of the parsed pattern, or
     * pattern.length() if the closing ']' is the last character of
     * the pattern string.
     * @param options bitmask for options to apply to the pattern.
     * Valid options are USET_IGNORE_SPACE and USET_CASE_INSENSITIVE.
     * @param symbols a symbol table mapping variable names to
     * values and stand-ins to UnicodeSets; may be NULL
     * @param status returns <code>U_ILLEGAL_ARGUMENT_ERROR</code> if the pattern
     * contains a syntax error.
     * @return a reference to this
     * @draft ICU 2.8
     */
    UnicodeSet& applyPattern(const UnicodeString& pattern,
                             ParsePosition& pos,
                             uint32_t options,
                             const SymbolTable* symbols,
                             UErrorCode& status);

    /**
     * Returns a string representation of this set.  If the result of
     * calling this function is passed to a UnicodeSet constructor, it
     * will produce another set that is equal to this one.
     * @param result the string to receive the rules.  Previous
     * contents will be deleted.
     * @param escapeUnprintable if TRUE then convert unprintable
     * character to their hex escape representations, \\uxxxx or
     * \\Uxxxxxxxx.  Unprintable characters are those other than
     * U+000A, U+0020..U+007E.
     * @stable ICU 2.0
     */
    virtual UnicodeString& toPattern(UnicodeString& result,
                             UBool escapeUnprintable = FALSE) const;

    /**
     * Modifies this set to contain those code points which have the given value
     * for the given binary or enumerated property, as returned by
     * u_getIntPropertyValue.  Prior contents of this set are lost.
     *
     * @param prop a property in the range UCHAR_BIN_START..UCHAR_BIN_LIMIT-1
     * or UCHAR_INT_START..UCHAR_INT_LIMIT-1
     * or UCHAR_MASK_START..UCHAR_MASK_LIMIT-1.
     *
     * @param value a value in the range u_getIntPropertyMinValue(prop)..
     * u_getIntPropertyMaxValue(prop), with one exception.  If prop is
     * UCHAR_GENERAL_CATEGORY_MASK, then value should not be a UCharCategory, but
     * rather a mask value produced by U_GET_GC_MASK().  This allows grouped
     * categories such as [:L:] to be represented.
     *
     * @param ec error code input/output parameter
     *
     * @return a reference to this set
     *
     * @stable ICU 2.4
     */
    UnicodeSet& applyIntPropertyValue(UProperty prop,
                                      int32_t value,
                                      UErrorCode& ec);

    /**
     * Modifies this set to contain those code points which have the
     * given value for the given property.  Prior contents of this
     * set are lost.
     *
     * @param prop a property alias, either short or long.  The name is matched
     * loosely.  See PropertyAliases.txt for names and a description of loose
     * matching.  If the value string is empty, then this string is interpreted
     * as either a General_Category value alias, a Script value alias, a binary
     * property alias, or a special ID.  Special IDs are matched loosely and
     * correspond to the following sets:
     *
     * "ANY" = [\\u0000-\\U0010FFFF],
     * "ASCII" = [\\u0000-\\u007F].
     *
     * @param value a value alias, either short or long.  The name is matched
     * loosely.  See PropertyValueAliases.txt for names and a description of
     * loose matching.  In addition to aliases listed, numeric values and
     * canonical combining classes may be expressed numerically, e.g., ("nv",
     * "0.5") or ("ccc", "220").  The value string may also be empty.
     *
     * @param ec error code input/output parameter
     *
     * @return a reference to this set
     *
     * @stable ICU 2.4
     */
    UnicodeSet& applyPropertyAlias(const UnicodeString& prop,
                                   const UnicodeString& value,
                                   UErrorCode& ec);

    /**
     * Returns the number of elements in this set (its cardinality).
     * Note than the elements of a set may include both individual
     * codepoints and strings.
     *
     * @return the number of elements in this set (its cardinality).
     * @stable ICU 2.0
     */
    virtual int32_t size(void) const;

    /**
     * Returns <tt>true</tt> if this set contains no elements.
     *
     * @return <tt>true</tt> if this set contains no elements.
     * @stable ICU 2.0
     */
    virtual UBool isEmpty(void) const;

    /**
     * Returns true if this set contains the given character.
     * @param c character to be checked for containment
     * @return true if the test condition is met
     * @stable ICU 2.0
     */
    virtual UBool contains(UChar32 c) const;

    /**
     * Returns true if this set contains every character
     * of the given range.
     * @param start first character, inclusive, of the range
     * @param end last character, inclusive, of the range
     * @return true if the test condition is met
     * @stable ICU 2.0
     */
    virtual UBool contains(UChar32 start, UChar32 end) const;

    /**
     * Returns <tt>true</tt> if this set contains the given
     * multicharacter string.
     * @param s string to be checked for containment
     * @return <tt>true</tt> if this set contains the specified string
     * @stable ICU 2.4
     */
    UBool contains(const UnicodeString& s) const;

    /**
     * Returns true if this set contains all the characters and strings
     * of the given set.
     * @param c set to be checked for containment
     * @return true if the test condition is met
     * @stable ICU 2.4
     */
    virtual UBool containsAll(const UnicodeSet& c) const;

    /**
     * Returns true if this set contains all the characters
     * of the given string.
     * @param s string containing characters to be checked for containment
     * @return true if the test condition is met
     * @stable ICU 2.4
     */
    UBool containsAll(const UnicodeString& s) const;

    /**
     * Returns true if this set contains none of the characters
     * of the given range.
     * @param start first character, inclusive, of the range
     * @param end last character, inclusive, of the range
     * @return true if the test condition is met
     * @stable ICU 2.4
     */
    UBool containsNone(UChar32 start, UChar32 end) const;

    /**
     * Returns true if this set contains none of the characters and strings
     * of the given set.
     * @param c set to be checked for containment
     * @return true if the test condition is met
     * @stable ICU 2.4
     */
    UBool containsNone(const UnicodeSet& c) const;

    /**
     * Returns true if this set contains none of the characters
     * of the given string.
     * @param s string containing characters to be checked for containment
     * @return true if the test condition is met
     * @stable ICU 2.4
     */
    UBool containsNone(const UnicodeString& s) const;

    /**
     * Returns true if this set contains one or more of the characters
     * in the given range.
     * @param start first character, inclusive, of the range
     * @param end last character, inclusive, of the range
     * @return true if the condition is met
     * @stable ICU 2.4
     */
    inline UBool containsSome(UChar32 start, UChar32 end) const;

    /**
     * Returns true if this set contains one or more of the characters
     * and strings of the given set.
     * @param s The set to be checked for containment
     * @return true if the condition is met
     * @stable ICU 2.4
     */
    inline UBool containsSome(const UnicodeSet& s) const;

    /**
     * Returns true if this set contains one or more of the characters
     * of the given string.
     * @param s string containing characters to be checked for containment
     * @return true if the condition is met
     * @stable ICU 2.4
     */
    inline UBool containsSome(const UnicodeString& s) const;

    /**
     * Implement UnicodeMatcher::matches()
     * @stable ICU 2.4
     */
    virtual UMatchDegree matches(const Replaceable& text,
                         int32_t& offset,
                         int32_t limit,
                         UBool incremental);

private:
    /**
     * Returns the longest match for s in text at the given position.
     * If limit > start then match forward from start+1 to limit
     * matching all characters except s.charAt(0).  If limit < start,
     * go backward starting from start-1 matching all characters
     * except s.charAt(s.length()-1).  This method assumes that the
     * first character, text.charAt(start), matches s, so it does not
     * check it.
     * @param text the text to match
     * @param start the first character to match.  In the forward
     * direction, text.charAt(start) is matched against s.charAt(0).
     * In the reverse direction, it is matched against
     * s.charAt(s.length()-1).
     * @param limit the limit offset for matching, either last+1 in
     * the forward direction, or last-1 in the reverse direction,
     * where last is the index of the last character to match.
     * @return If part of s matches up to the limit, return |limit -
     * start|.  If all of s matches before reaching the limit, return
     * s.length().  If there is a mismatch between s and text, return
     * 0
     */
    static int32_t matchRest(const Replaceable& text,
                             int32_t start, int32_t limit,
                             const UnicodeString& s);

    /**
     * Returns the smallest value i such that c < list[i].  Caller
     * must ensure that c is a legal value or this method will enter
     * an infinite loop.  This method performs a binary search.
     * @param c a character in the range MIN_VALUE..MAX_VALUE
     * inclusive
     * @return the smallest integer i in the range 0..len-1,
     * inclusive, such that c < list[i]
     */
    int32_t findCodePoint(UChar32 c) const;

public:

    /**
     * Implementation of UnicodeMatcher API.  Union the set of all
     * characters that may be matched by this object into the given
     * set.
     * @param toUnionTo the set into which to union the source characters
     * @stable ICU 2.4
     */
    virtual void addMatchSetTo(UnicodeSet& toUnionTo) const;

    /**
     * Returns the index of the given character within this set, where
     * the set is ordered by ascending code point.  If the character
     * is not in this set, return -1.  The inverse of this method is
     * <code>charAt()</code>.
     * @return an index from 0..size()-1, or -1
     * @stable ICU 2.4
     */
    int32_t indexOf(UChar32 c) const;

    /**
     * Returns the character at the given index within this set, where
     * the set is ordered by ascending code point.  If the index is
     * out of range, return (UChar32)-1.  The inverse of this method is
     * <code>indexOf()</code>.
     * @param index an index from 0..size()-1
     * @return the character at the given index, or (UChar32)-1.
     * @stable ICU 2.4
     */
    UChar32 charAt(int32_t index) const;

    /**
     * Adds the specified range to this set if it is not already
     * present.  If this set already contains the specified range,
     * the call leaves this set unchanged.  If <code>end > start</code>
     * then an empty range is added, leaving the set unchanged.
     * This is equivalent to a boolean logic OR, or a set UNION.
     *
     * @param start first character, inclusive, of range to be added
     * to this set.
     * @param end last character, inclusive, of range to be added
     * to this set.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& add(UChar32 start, UChar32 end);

    /**
     * Adds the specified character to this set if it is not already
     * present.  If this set already contains the specified character,
     * the call leaves this set unchanged.
     * @stable ICU 2.0
     */
    UnicodeSet& add(UChar32 c);

    /**
     * Adds the specified multicharacter to this set if it is not already
     * present.  If this set already contains the multicharacter,
     * the call leaves this set unchanged.
     * Thus "ch" => {"ch"}
     * <br><b>Warning: you cannot add an empty string ("") to a UnicodeSet.</b>
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& add(const UnicodeString& s);

 private:
    /**
     * @return a code point IF the string consists of a single one.
     * otherwise returns -1.
     * @param string to test
     */
    static int32_t getSingleCP(const UnicodeString& s);

    void _add(const UnicodeString& s);

 public:
    /**
     * Adds each of the characters in this string to the set. Thus "ch" => {"c", "h"}
     * If this set already any particular character, it has no effect on that character.
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& addAll(const UnicodeString& s);

    /**
     * Retains EACH of the characters in this string. Note: "ch" == {"c", "h"}
     * If this set already any particular character, it has no effect on that character.
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& retainAll(const UnicodeString& s);

    /**
     * Complement EACH of the characters in this string. Note: "ch" == {"c", "h"}
     * If this set already any particular character, it has no effect on that character.
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& complementAll(const UnicodeString& s);

    /**
     * Remove EACH of the characters in this string. Note: "ch" == {"c", "h"}
     * If this set already any particular character, it has no effect on that character.
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& removeAll(const UnicodeString& s);

    /**
     * Makes a set from a multicharacter string. Thus "ch" => {"ch"}
     * <br><b>Warning: you cannot add an empty string ("") to a UnicodeSet.</b>
     * @param s the source string
     * @return a newly created set containing the given string.
     * The caller owns the return object and is responsible for deleting it.
     * @stable ICU 2.4
     */
    static UnicodeSet* U_EXPORT2 createFrom(const UnicodeString& s);


    /**
     * Makes a set from each of the characters in the string. Thus "ch" => {"c", "h"}
     * @param s the source string
     * @return a newly created set containing the given characters
     * The caller owns the return object and is responsible for deleting it.
     * @stable ICU 2.4
     */
    static UnicodeSet* U_EXPORT2 createFromAll(const UnicodeString& s);

    /**
     * Retain only the elements in this set that are contained in the
     * specified range.  If <code>end > start</code> then an empty range is
     * retained, leaving the set empty.  This is equivalent to
     * a boolean logic AND, or a set INTERSECTION.
     *
     * @param start first character, inclusive, of range to be retained
     * to this set.
     * @param end last character, inclusive, of range to be retained
     * to this set.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& retain(UChar32 start, UChar32 end);


    /**
     * Retain the specified character from this set if it is present.
     * @stable ICU 2.0
     */
    UnicodeSet& retain(UChar32 c);

    /**
     * Removes the specified range from this set if it is present.
     * The set will not contain the specified range once the call
     * returns.  If <code>end > start</code> then an empty range is
     * removed, leaving the set unchanged.
     *
     * @param start first character, inclusive, of range to be removed
     * from this set.
     * @param end last character, inclusive, of range to be removed
     * from this set.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& remove(UChar32 start, UChar32 end);

    /**
     * Removes the specified character from this set if it is present.
     * The set will not contain the specified range once the call
     * returns.
     * @stable ICU 2.0
     */
    UnicodeSet& remove(UChar32 c);

    /**
     * Removes the specified string from this set if it is present.
     * The set will not contain the specified character once the call
     * returns.
     * @param s the source string
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& remove(const UnicodeString& s);

    /**
     * Inverts this set.  This operation modifies this set so that
     * its value is its complement.  This is equivalent to
     * <code>complement(MIN_VALUE, MAX_VALUE)</code>.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& complement(void);

    /**
     * Complements the specified range in this set.  Any character in
     * the range will be removed if it is in this set, or will be
     * added if it is not in this set.  If <code>end > start</code>
     * then an empty range is complemented, leaving the set unchanged.
     * This is equivalent to a boolean logic XOR.
     *
     * @param start first character, inclusive, of range to be removed
     * from this set.
     * @param end last character, inclusive, of range to be removed
     * from this set.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& complement(UChar32 start, UChar32 end);

    /**
     * Complements the specified character in this set.  The character
     * will be removed if it is in this set, or will be added if it is
     * not in this set.
     * @stable ICU 2.0
     */
    UnicodeSet& complement(UChar32 c);

    /**
     * Complement the specified string in this set.
     * The set will not contain the specified string once the call
     * returns.
     * <br><b>Warning: you cannot add an empty string ("") to a UnicodeSet.</b>
     * @param s the string to complement
     * @return this object, for chaining
     * @stable ICU 2.4
     */
    UnicodeSet& complement(const UnicodeString& s);

    /**
     * Adds all of the elements in the specified set to this set if
     * they're not already present.  This operation effectively
     * modifies this set so that its value is the <i>union</i> of the two
     * sets.  The behavior of this operation is unspecified if the specified
     * collection is modified while the operation is in progress.
     *
     * @param c set whose elements are to be added to this set.
     * @see #add(char, char)
     * @stable ICU 2.0
     */
    virtual UnicodeSet& addAll(const UnicodeSet& c);

    /**
     * Retains only the elements in this set that are contained in the
     * specified set.  In other words, removes from this set all of
     * its elements that are not contained in the specified set.  This
     * operation effectively modifies this set so that its value is
     * the <i>intersection</i> of the two sets.
     *
     * @param c set that defines which elements this set will retain.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& retainAll(const UnicodeSet& c);

    /**
     * Removes from this set all of its elements that are contained in the
     * specified set.  This operation effectively modifies this
     * set so that its value is the <i>asymmetric set difference</i> of
     * the two sets.
     *
     * @param c set that defines which elements will be removed from
     *          this set.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& removeAll(const UnicodeSet& c);

    /**
     * Complements in this set all elements contained in the specified
     * set.  Any character in the other set will be removed if it is
     * in this set, or will be added if it is not in this set.
     *
     * @param c set that defines which elements will be xor'ed from
     *          this set.
     * @stable ICU 2.4
     */
    virtual UnicodeSet& complementAll(const UnicodeSet& c);

    /**
     * Removes all of the elements from this set.  This set will be
     * empty after this call returns.
     * @stable ICU 2.0
     */
    virtual UnicodeSet& clear(void);

    /**
     * Close this set over the given attribute.  For the attribute
     * USET_CASE, the result is to modify this set so that:
     *
     * 1. For each character or string 'a' in this set, all strings or
     * characters 'b' such that foldCase(a) == foldCase(b) are added
     * to this set.
     *
     * 2. For each string 'e' in the resulting set, if e !=
     * foldCase(e), 'e' will be removed.
     *
     * Example: [aq\\u00DF{Bc}{bC}{Fi}] => [aAqQ\\u00DF\\uFB01{ss}{bc}{fi}]
     *
     * (Here foldCase(x) refers to the operation u_strFoldCase, and a
     * == b denotes that the contents are the same, not pointer
     * comparison.)
     *
     * @param attribute bitmask for attributes to close over.
     * Currently only the USET_CASE bit is supported.  Any undefined bits
     * are ignored.
     * @return a reference to this set.
     * @internal
     */
    UnicodeSet& closeOver(int32_t attribute);

    /**
     * Iteration method that returns the number of ranges contained in
     * this set.
     * @see #getRangeStart
     * @see #getRangeEnd
     * @stable ICU 2.4
     */
    virtual int32_t getRangeCount(void) const;

    /**
     * Iteration method that returns the first character in the
     * specified range of this set.
     * @see #getRangeCount
     * @see #getRangeEnd
     * @stable ICU 2.4
     */
    virtual UChar32 getRangeStart(int32_t index) const;

    /**
     * Iteration method that returns the last character in the
     * specified range of this set.
     * @see #getRangeStart
     * @see #getRangeEnd
     * @stable ICU 2.4
     */
    virtual UChar32 getRangeEnd(int32_t index) const;

    /**
     * Serializes this set into an array of 16-bit integers.  Serialization
     * (currently) only records the characters in the set; multicharacter
     * strings are ignored.
     *
     * The array has following format (each line is one 16-bit
     * integer):
     *
     *  length     = (n+2*m) | (m!=0?0x8000:0)
     *  bmpLength  = n; present if m!=0
     *  bmp[0]
     *  bmp[1]
     *  ...
     *  bmp[n-1]
     *  supp-high[0]
     *  supp-low[0]
     *  supp-high[1]
     *  supp-low[1]
     *  ...
     *  supp-high[m-1]
     *  supp-low[m-1]
     *
     * The array starts with a header.  After the header are n bmp
     * code points, then m supplementary code points.  Either n or m
     * or both may be zero.  n+2*m is always <= 0x7FFF.
     *
     * If there are no supplementary characters (if m==0) then the
     * header is one 16-bit integer, 'length', with value n.
     *
     * If there are supplementary characters (if m!=0) then the header
     * is two 16-bit integers.  The first, 'length', has value
     * (n+2*m)|0x8000.  The second, 'bmpLength', has value n.
     *
     * After the header the code points are stored in ascending order.
     * Supplementary code points are stored as most significant 16
     * bits followed by least significant 16 bits.
     *
     * @param dest pointer to buffer of destCapacity 16-bit integers.
     * May be NULL only if destCapacity is zero.
     * @param destCapacity size of dest, or zero.  Must not be negative.
     * @param ec error code.  Will be set to U_INDEX_OUTOFBOUNDS_ERROR
     * if n+2*m > 0x7FFF.  Will be set to U_BUFFER_OVERFLOW_ERROR if
     * n+2*m+(m!=0?2:1) > destCapacity.
     * @return the total length of the serialized format, including
     * the header, that is, n+2*m+(m!=0?2:1), or 0 on error other
     * than U_BUFFER_OVERFLOW_ERROR.
     * @stable ICU 2.4
     */
    int32_t serialize(uint16_t *dest, int32_t destCapacity, UErrorCode& ec) const;

    /**
     * Reallocate this objects internal structures to take up the least
     * possible space, without changing this object's value.
     * @stable ICU 2.4
     */
    virtual UnicodeSet& compact();

    /**
     * Return the class ID for this class.  This is useful only for
     * comparing to a return value from getDynamicClassID().  For example:
     * <pre>
     * .      Base* polymorphic_pointer = createPolymorphicObject();
     * .      if (polymorphic_pointer->getDynamicClassID() ==
     * .          Derived::getStaticClassID()) ...
     * </pre>
     * @return          The class ID for all objects of this class.
     * @stable ICU 2.0
     */
    static UClassID U_EXPORT2 getStaticClassID(void);

    /**
     * Implement UnicodeFunctor API.
     *
     * @return The class ID for this object. All objects of a given
     * class have the same class ID.  Objects of other classes have
     * different class IDs.
     * @stable ICU 2.4
     */
    virtual UClassID getDynamicClassID(void) const;

private:

    // Private API for the USet API

    friend class USetAccess;

    int32_t getStringCount() const;

    const UnicodeString* getString(int32_t index) const;

    //----------------------------------------------------------------
    // RuleBasedTransliterator support
    //----------------------------------------------------------------

private:

    /**
     * Returns <tt>true</tt> if this set contains any character whose low byte
     * is the given value.  This is used by <tt>RuleBasedTransliterator</tt> for
     * indexing.
     */
    virtual UBool matchesIndexValue(uint8_t v) const;

private:

    //----------------------------------------------------------------
    // Implementation: Pattern parsing
    //----------------------------------------------------------------

    void applyPattern(RuleCharacterIterator& chars,
                      const SymbolTable* symbols,
                      UnicodeString& rebuiltPat,
                      uint32_t options,
                      UErrorCode& ec);

    //----------------------------------------------------------------
    // Implementation: Utility methods
    //----------------------------------------------------------------

    void ensureCapacity(int32_t newLen);

    void ensureBufferCapacity(int32_t newLen);

    void swapBuffers(void);

    UBool allocateStrings();

    UnicodeString& _toPattern(UnicodeString& result,
                              UBool escapeUnprintable) const;

    UnicodeString& _generatePattern(UnicodeString& result,
                                    UBool escapeUnprintable) const;

    static void _appendToPat(UnicodeString& buf, const UnicodeString& s, UBool escapeUnprintable);

    static void _appendToPat(UnicodeString& buf, UChar32 c, UBool escapeUnprintable);

    //----------------------------------------------------------------
    // Implementation: Fundamental operators
    //----------------------------------------------------------------

    void exclusiveOr(const UChar32* other, int32_t otherLen, int8_t polarity);

    void add(const UChar32* other, int32_t otherLen, int8_t polarity);

    void retain(const UChar32* other, int32_t otherLen, int8_t polarity);

    /**
     * Return true if the given position, in the given pattern, appears
     * to be the start of a property set pattern [:foo:], \\p{foo}, or
     * \\P{foo}, or \\N{name}.
     */
    static UBool resemblesPropertyPattern(const UnicodeString& pattern,
                                          int32_t pos);

    static UBool resemblesPropertyPattern(RuleCharacterIterator& chars,
                                          int32_t iterOpts);

    /**
     * Parse the given property pattern at the given parse position
     * and set this UnicodeSet to the result.
     *
     * The original design document is out of date, but still useful.
     * Ignore the property and value names:
     * http://oss.software.ibm.com/cvs/icu/~checkout~/icuhtml/design/unicodeset_properties.html
     *
     * Recognized syntax:
     *
     * [:foo:] [:^foo:] - white space not allowed within "[:" or ":]"
     * \\p{foo} \\P{foo}  - white space not allowed within "\\p" or "\\P"
     * \\N{name}         - white space not allowed within "\\N"
     *
     * Other than the above restrictions, white space is ignored.  Case
     * is ignored except in "\\p" and "\\P" and "\\N".  In 'name' leading
     * and trailing space is deleted, and internal runs of whitespace
     * are collapsed to a single space.
     *
     * We support binary properties, enumerated properties, and the
     * following non-enumerated properties:
     *
     *  Numeric_Value
     *  Name
     *  Unicode_1_Name
     *
     * @param pattern the pattern string
     * @param ppos on entry, the position at which to begin parsing.
     * This should be one of the locations marked '^':
     *
     *   [:blah:]     \\p{blah}     \\P{blah}     \\N{name}
     *   ^       %    ^       %    ^       %    ^       %
     *
     * On return, the position after the last character parsed, that is,
     * the locations marked '%'.  If the parse fails, ppos is returned
     * unchanged.
     * @return a reference to this.
     */
    UnicodeSet& applyPropertyPattern(const UnicodeString& pattern,
                                     ParsePosition& ppos,
                                     UErrorCode &ec);

    void applyPropertyPattern(RuleCharacterIterator& chars,
                              UnicodeString& rebuiltPat,
                              UErrorCode& ec);

    /**
     * A filter that returns TRUE if the given code point should be
     * included in the UnicodeSet being constructed.
     */
    typedef UBool (*Filter)(UChar32 codePoint, void* context);

    /**
     * Given a filter, set this UnicodeSet to the code points
     * contained by that filter.  The filter MUST be
     * property-conformant.  That is, if it returns value v for one
     * code point, then it must return v for all affiliated code
     * points, as defined by the inclusions list.  See
     * getInclusions().
     * src is a UPropertySource value.
     */
    void applyFilter(Filter filter,
                     void* context,
                     int32_t src,
                     UErrorCode &status);

    /**
     * Return a cached copy of the inclusions list for the property source.
     */
    static const UnicodeSet* getInclusions(int32_t src, UErrorCode &errorCode);

    friend class UnicodeSetIterator;

    //----------------------------------------------------------------
    // Implementation: closeOver
    //----------------------------------------------------------------

    void caseCloseOne(const UnicodeString& folded);

    void caseCloseOne(const CaseEquivClass& c);

    void caseCloseOne(UChar folded);

    static const CaseEquivClass* getCaseMapOf(const UnicodeString& folded);

    static const CaseEquivClass* getCaseMapOf(UChar folded);
};

inline UBool UnicodeSet::operator!=(const UnicodeSet& o) const {
    return !operator==(o);
}

inline UBool UnicodeSet::containsSome(UChar32 start, UChar32 end) const {
    return !containsNone(start, end);
}

inline UBool UnicodeSet::containsSome(const UnicodeSet& s) const {
    return !containsNone(s);
}

inline UBool UnicodeSet::containsSome(const UnicodeString& s) const {
    return !containsNone(s);
}

U_NAMESPACE_END

#endif
