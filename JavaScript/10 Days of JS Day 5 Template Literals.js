//  Task: 
/*  
Finds the initial values of  and  by plugging the area and perimeter values into the formula:
where  is the rectangle's area and  is its perimeter.
Creates an array consisting of  and  and sorts it in ascending order.
Returns the sorted array.
*/


/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */

function sides(literals, ...expressions) {
    let A  = [...expressions][0];
    let P  = [...expressions][1];
    let s1 = (P + Math.sqrt((P * P) - 16 * A))/4;
    let s2 = (P - Math.sqrt((P * P) - 16 * A))/4;
    let sideArr = [s1, s2].sort((a, b) => a > b ? 1 : -1);
    return sideArr;
}
