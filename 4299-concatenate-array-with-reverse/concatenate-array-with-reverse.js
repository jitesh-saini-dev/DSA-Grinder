/**
 * @param {number[]} nums
 * @return {number[]}
 */
var concatWithReverse = function(nums) {
    let ans = [];

    for (let i = 0; i < nums.length; i++) {
        ans.push(nums[i]);
    }

    for (let i = nums.length - 1; i >= 0; i--) {
        ans.push(nums[i]);
    }

    return ans;
};
