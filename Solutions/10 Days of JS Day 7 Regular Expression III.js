//  Task: Complete the function in the editor below by returning a RegExp object, , that matches every integer in some string .

function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match ALL occurrences of numbers in a string.
     */
    
    let re = RegExp(/\d+/g);
    /*
     * Do not remove the return statement
     */
    return re;
}