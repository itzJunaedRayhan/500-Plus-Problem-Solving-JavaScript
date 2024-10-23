//  Task:
//  If the element is even, multiply the element by .
//  If the element is odd, multiply the element by .


/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */

let modifyArray = (nums) => {
    let newArr = [];
    for (let i = 0; i < nums.length; i++) {
        nums[i] % 2 === 0 ? newArr.push(nums[i] * 2) : newArr.push(nums[i] * 3);
    }
    return newArr;
}