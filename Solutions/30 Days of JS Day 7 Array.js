//  Task:
/*
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Example:
A = [1, 2, 3, 4];
Print 4 3 2 1. Each integer is separated by one space.
*/

function main() {
    const n = parseInt(readLine().trim(), 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));
    console.log(arr.reverse().join(" "));
}