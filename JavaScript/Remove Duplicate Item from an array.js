//  Remove Duplicate Number from an array

let nums = [3, 6, 2, 7, 3, 2, 8, 1, 9, 11, 56];
let uniqueNums = [];

for (let i = 0; i < nums.length; i++) {
    let element = nums[i];
    let index   = uniqueNums.indexOf(element);
    if (index == -1) {
        uniqueNums.push(element);
    }
}
console.log(uniqueNums);