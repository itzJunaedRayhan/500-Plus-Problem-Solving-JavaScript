//  Task:
//  1.  Try to reverse string  using the split, reverse, and join methods.
//  2.  If an exception is thrown, catch it and print the contents of the exception's  on a new line.
//  3.  Print  on a new line. If no exception was thrown, then this should be the reversed string; if an exception was thrown, this should be the original string.


/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */


function reverseString(s) {
    try{
        let str = s.split('').reverse().join('');
        console.log(str);
    }catch(err) {
        console.log(err.message);
        console.log(s);
    }
}