//  Task:
/*
The first mission: Traversing arr, find the shortest string length.
The second mission: Traversing arr again, intercept all strings to the shortest string length
(Start from index0). you can use one of slice() substring() or substr() do it. return the result after 
finished the work.
*/


function cutIt(arr){
    let length = arr.reduce((a, b) => a.length <= b.length ? a : b).length;
    let newArr = arr.map(element => element.slice(0, length));
    return newArr;
}

cutIt(["ab","cde","fgh"]);
cutIt(["abc","defgh","ijklmn"]);
cutIt(["codewars","javascript","java"]);