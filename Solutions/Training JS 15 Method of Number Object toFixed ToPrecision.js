//  Task:
/*
Coding in function howManySmaller, function accept 2 parameter:arr and n. arr is a 
decimal array. n is a decimal.

The first mission: let all elements in the array keep two decimal places
(No need to convert number n).

The second mission: Traversal arr, count the number of the element which smaller 
than n and return it.
*/


function howManySmaller(arr,n){
    //coding here..
    let count = 0
    for (let i = 0; i < arr.length; i++) {
        let num = arr[i].toFixed(2)
        if (num < n) count++
    }
    return count
}
howManySmaller([1.234,1.235,1.228],1.24)
howManySmaller([1.1888,1.1868,1.1838],1.19)
howManySmaller([3.1288,3.1212,3.1205],3.1212)