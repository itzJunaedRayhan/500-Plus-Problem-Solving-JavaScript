//  Task:
/*
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed 
characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.

Example:
if S = adbecf
Print -> abc def
*/


function processData(input) {
    //Enter your code here
    let str = input.split("\n");
    for (let i = 1; i < str.length; i++) {
        let word = str[i].split("");
        let even = '';
        let odd  = '';
        for (let j = 0; j < word.length; j++) {
            if (j % 2 === 0) {
                even += word[j];
            }
            if (j % 2 !== 0) {
                odd += word[j];
            }
        }
        console.log(even + ' ' +odd);
    }
}