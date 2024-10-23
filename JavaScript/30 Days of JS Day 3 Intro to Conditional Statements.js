//  Task:
/*
Given an integer,N, perform the following conditional actions:

If N is odd, print Weird
If N is even and in the inclusive range of 2 to 5, print Not Weird
If N is even and in the inclusive range of 6 to 20, print Weird
If N is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not N is weird.
*/

function main() {
    const N = parseInt(readLine().trim(), 10);
    let result = (N%2 !== 0) ? console.log("Weird") : 
    (N > 2 && N <= 5) ? console.log("Not Weird") : 
    (N > 6 && N <= 20) ? console.log("Weird") : 
    console.log("Not Weird");
    
    return result;
}
