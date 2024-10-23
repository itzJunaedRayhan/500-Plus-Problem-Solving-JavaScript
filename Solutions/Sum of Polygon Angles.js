//  Sum of Polygon Angles:
/*
Given an n-sided regular polygon n, return the total sum of internal angles (in degrees).

Examples:
sumPolygon(3) ➞ 180
sumPolygon(4) ➞ 360
sumPolygon(6) ➞ 720

Notes:
n will always be greater than 2.
*/

function SumOfPolygon (num) {
    if (num > 2) {
        return (num - 2) * 180
    }
    return "num will always be greater than 2";
}

SumOfPolygon(4);
