//  Find the Factorial on any number:

function factorial(num){
    //base case
    if(num == 0 || num == 1){
        return 1;
    //recursive case
    }else{
        return num * factorial(num-1);
    }
}
let number = 4;
let result = factorial(number)
console.log("The factorial of " + number + " is " + result);