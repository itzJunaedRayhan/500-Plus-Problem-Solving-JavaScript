//  Task:
/*
We translate the sentence into an alien language according to the following rules:
Each word in the sentence is separated by spaces. The last letter of each word in the 
sentence turns to lowercase, and the other letters are capitalized. Looks very strange? 
Because this is the form of alien language 

Example:
alienLanguage("My name is John") should return "My NAMe Is JOHn"
alienLanguage("this is an example") should return "THIs Is An EXAMPLe"
alienLanguage("Hello World") should return "HELLo WORLd"
*/

function alienLanguage(str){
    //coding here...
    let words = str.toUpperCase().split(" ")
    .map(element => [...element].splice(0, element.length - 1)
    .join("") + element[element.length - 1].toLowerCase()).join(" ");

    return words;
}
alienLanguage("My name is John");
alienLanguage("this is an example");
alienLanguage("Hello World");
alienLanguage("HELLO WORLD");