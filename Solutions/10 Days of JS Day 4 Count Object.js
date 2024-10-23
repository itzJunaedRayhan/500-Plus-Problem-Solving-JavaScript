//  Task:
/*
Complete the function in the editor. It has one parameter: an array, , of objects. 
Each object in the array has two integer properties denoted by  and . 
The function must return a count of all such objects  in array  that satisfy .
*/

function getCount(objects) {
    let count = 0;
    for(let i = 0; i < objects.length; i++) {
        if(objects[i].x === objects[i].y) {
            count++;
        }
    }
    return count;
}