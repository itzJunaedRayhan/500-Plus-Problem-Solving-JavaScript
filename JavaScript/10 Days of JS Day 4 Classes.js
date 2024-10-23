//  Task:
//  A constructor that takes an array of integer values describing the lengths of the polygon's sides.
//  A perimeter() method that returns the polygon's perimeter.

class Polygon{
    constructor (sideLength) {
        this.side = sideLength;
    }
    perimeter() {
        let result = this.side.reduce((prev, current) => prev + current, 0);
        return result;
    }
}