/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function(nums) {
    let ans = 0;

    for (let num of nums) {
        if (num % 3 !== 0) {
            ans++;
        }
    }

    return ans;
};
