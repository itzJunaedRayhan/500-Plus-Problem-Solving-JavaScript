//  Task:
//  Complete the getSecondLargest function in the editor below.
//  getSecondLargest has the following parameters:
//  int nums[n]: an array of integers
//  Returns int: the second largest number in nums



/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/


function getSecondLargest(nums) {
    // Complete the function
    let MaxOrder = nums.sort((a, b) => a < b ? 1 : -1);
    let secondMax = new Array();
    for (let i = 0; i < MaxOrder.length; i++) {
        let max = MaxOrder[0];
        if (MaxOrder[i] === max) {
            continue;
        } else {
            return MaxOrder[i]
        }
    }
    
}