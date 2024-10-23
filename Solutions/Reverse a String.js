//  Reverse a String

function reverseString (str) {
    let reverse = "";
    for (let i = 0; i < str.length; i++) {
        let char = str[i];
        reverse = char + reverse;
    }
    return reverse;
}

let statement = "Hello I am Ragnar";
console.log(reverseString(statement));