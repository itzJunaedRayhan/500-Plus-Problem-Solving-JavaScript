//  Task:
/*
1.  Declare a constant variable, , and assign it the value Math.PI. You will not pass this challenge unless the variable is declared as a constant and named PI (uppercase).
2.  Read a number, , denoting the radius of a circle from stdin.
3.  Use  and  to calculate the  and  of a circle having radius .
4.  Print  as the first line of output and print  as the second line of output
*/

function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
    const PI = Math.PI;
    const r  = readLine();
    // Print the area of the circle:
    let area;
    area = PI * r *r;
    // Print the perimeter of the circle:
    let perimeter;
    perimeter = 2 * PI * r;
    
    console.log(area);
    console.log(perimeter);
    try {    
        // Attempt to redefine the value of constant variable PI
        PI = 0;
        // Attempt to print the value of PI
        console.log(PI);
    } catch(error) {
        console.error("You correctly declared 'PI' as a constant.");
    }
}