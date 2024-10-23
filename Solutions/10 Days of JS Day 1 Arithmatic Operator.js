//  Task:
//  getArea(length, width): Calculate and return the area of a rectangle having sides  and .
//  getPerimeter(length, width): Calculate and return the perimeter of a rectangle having sides 


/**
*   Calculate the area of a rectangle.
*   length: The length of the rectangle.
*   width: The width of the rectangle. 
*	Return a number denoting the rectangle's area.
**/

function getArea(length, width) {
    let area;
    // Write your code here
    area = length *  width;
    return area;
}

/**
*   Calculate the perimeter of a rectangle.
*	
*	length: The length of the rectangle.
*   width: The width of the rectangle.
*   
*	Return a number denoting the perimeter of a rectangle.
**/

function getPerimeter(length, width) {
    let perimeter;
    // Write your code here
    perimeter = (length + width) * 2;
    return perimeter;
}