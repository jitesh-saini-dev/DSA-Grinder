/**
 * @param {string} s
 * @return {number}
 */
var minimizedStringLength = function(s) {
      const seen = new Set();

    for (const ch of s) {
        seen.add(ch);
    }

    return seen.size;
};