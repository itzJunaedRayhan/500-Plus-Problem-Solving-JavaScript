//  Task:
/*
Coding in function pickIt, function accept 1 parameter:arr, it's a number array, we need traverse arr by 
using for loop, if element is odd number, push it to array odd, if it's a even number, push it to array 
even.
*/

function pickIt(arr){
    var odd=[],even=[];
    //coding here
    for (let i = 0; i < arr.length; i++) {
      arr[i] % 2 === 0 ? even.push(arr[i]) : odd.push(arr[i]);
    }
    return [odd,even];
}

pickIt([8,1,5,4,6,1,1]),[[1,5,1,1],[8,4,6]]