//  Task:
/*
Implement a function named factorial that has one parameter: an integer, . 
It must return the value of  (i.e.,  factorial).
*/

/*
 * Create the function factorial here
 */

function factorial (n) {
    if (n === 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
