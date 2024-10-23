//  Task:
/*
Write a Calculator class with a single method: int power(int,int). The power method takes two integers, 
n and p, as parameters and returns the integer result of n**p. If either n or [] is negative, then the 
method must throw an exception with the message: n and p should be non-negative.

Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
*/

//Write your code here
class Calculator {
    constructor () {   
    }
    power (n, p) {
        return (n < 0 || p < 0) ? "n and p should be non-negative" : Math.pow(n, p);
    }
}


function sumDivisors(num) {
    let sum = 0;
    for (var i = 1; i <= num; i++){
        if (!(num % i)) {
            sum += i;
        }
    }
    console.log(sum);
}
sumDivisors(6);