//  Task:
/*
First, calculate the difference of the same index of the arr1 and arr2. 
Like this:
[1,3,5]
 | | |   --->  8, 5, 2
[9,8,7]

Please note that the difference is positive. Such as the above 1 and 9, the difference should be 8, 
not -8. I think abs() can help you get the correct result ;-)
Then find the maximum and minimum values of them, and return the results in the form of an array. 
Like this:

maxvalue , minvalue
[    8     ,    2     ]

Example:
maxMin([1,3,5],[9,8,7])               should return [8,2]
maxMin([1,10,100,1000],[0,0,0,0])     should return [1000,1]
maxMin([10,20,30,40],[111,11,1,-111]) should return [151,9]
*/

function maxMin(arr1,arr2){
    //coding here...
    let num  = [];
    let sub  = [];
      for (let j = 0; j < arr1.length; j++) {
        sub.push(Math.abs(arr1[j] - arr2[j]));
      }
    num.push(Math.max(...sub));
    num.push(Math.min(...sub));
    return num;
}
maxMin([1,3,5],[9,8,7]);
maxMin([1,10,100,1000],[0,0,0,0]);
maxMin([10,20,30,40],[111,11,1,-111]);