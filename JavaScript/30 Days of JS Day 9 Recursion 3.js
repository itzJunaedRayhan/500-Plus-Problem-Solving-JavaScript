//  Task:
/*
Recursive Method for Calculating Factorial
*/

function factorial(n) {
    // Write your code here
    if (n === 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
