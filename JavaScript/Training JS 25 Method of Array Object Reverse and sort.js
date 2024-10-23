//  Task:
/*
sortIt([1,2,3,4,4,5,5,6,6]) should return [3,2,1,6,6,5,5,4,4]
*/

function sortIt(arr){
    return arr.slice().sort((x,y)=>arr.filter(z=>z==x).length-arr.filter(z=>z==y).length || y-x);
}
sortIt([1,1,1,2,2,3]);
sortIt([1,1,1,2,2,2,3,3,3]);
sortIt([1,2,3,4,4,5,5,6,6]);
let arr1=[1,3,3,5,2,2,4,6,6,7,7,7], copy=arr1.slice();
sortIt(arr1)