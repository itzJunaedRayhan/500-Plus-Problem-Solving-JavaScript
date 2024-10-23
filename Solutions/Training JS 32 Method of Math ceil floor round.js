//  Task:
/*
If the decimal point is on the left side of the number (that is, the count of digits on the left of the 
decimal point is less than that on the right), Using ceil() method.
roundIt(3.45) should return 4

If the decimal point is on the right side of the number (that is, the count of digits on the left of the 
decimal point is more than that on the right), Using floor() method.
roundIt(34.5) should return 34

If the decimal point is on the middle of the number (that is, the count of digits on the left of the 
decimal point is equals that on the right), Using round() method.
roundIt(34.56) should return 35
*/

function roundIt(n){
    //coding here...
    let num = String(n).split('.');
    return (num[0].length < num[1].length) ? 
    Math.ceil(n) : (num[0].length > num[1].length) ? 
    Math.floor(n) : Math.round(n)
}

roundIt(3.45);  //  4
roundIt(34.5);  //  34
roundIt(34.56); //  35