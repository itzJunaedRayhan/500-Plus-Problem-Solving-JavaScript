//  Task:
//  It is a subclass of Rectangle.
//  It contains a constructor and no other methods.
//  It can use the Rectangle class' area method to print the area of a Square object.

Rectangle.prototype.area = function () {
    return this.w * this.h;
}
class Square extends Rectangle {
    constructor(s){
        super(s);
        this.w = s;
        this.h = s;   
    }
}