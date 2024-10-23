// Task:
/*
Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer 
denoting the maximum number of consecutive 1's in n's binary representation. When working with different 
bases, it is common to show the base as a subscript.
Example:
n = 125
The binary representation of  (125)10 is (1111101)2. In base 10, there are 5 and 1 consecutive ones in 
two groups. Print the maximum, 5.
*/


function main() {
    const n = parseInt(readLine().trim(), 10);
    let num = n.toString(2).split("");
    let count = 0;
    let result = 0;
    for (let i = 0; i < num.length; i++) {  
        (Number(num[i]) === 1) ? count++ :  count = 0;
        if (count > result) {
            result = count;
        }
    }
    console.log(result)
}