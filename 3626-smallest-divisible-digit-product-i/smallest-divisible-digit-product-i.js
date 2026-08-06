/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
var smallestNumber = function(n, t) {
     while (true) {
        let num = n;
        let product = 1;

        while (num > 0) {
            product *= (num % 10);
            num = Math.floor(num / 10);
        }

        if (product % t === 0) {
            return n;
        }

        n++;
    }
};