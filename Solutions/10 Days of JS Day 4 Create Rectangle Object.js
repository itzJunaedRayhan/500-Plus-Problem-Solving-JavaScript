//  Task:
//  Complete the function in the editor. It has two parameters:  and 
//  It must return an object modeling a rectangle that has the following properties:


function Rectangle(a, b) {
    this.length = a;
    this.width  = b;
    this.perimeter = 2 * (a + b);
    this.area = a * b;
}
