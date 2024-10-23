//  Task:
/*
If the string length is an even number, use the insert method. for example: "abcd" should became "ab|cd". 
"|" should be inserted between ab and cd.

If the string length is an odd number, use the replacement method. for example: "abcde" should became 
"ab|de". Character c will be replaced by |.

Example: 
isolateIt(["abcd","efgh"]) should return ["ab|cd","ef|gh"]
isolateIt(["abcde","fghij"]) should return ["ab|de","fg|ij"]
isolateIt(["1234","56789"]) should return ["12|34","56|89"]
*/


function isolateIt(arr){
    let result = arr.map(element => element.split("")
    .splice(0, Math.floor(element.length / 2))
    .join("").concat("|", element.split("")
    .splice(element.length - Math.floor(element.length / 2)).join("")));
    return result;
}