//  Task:
/*
Coding in function infiniteLoop. function accept 3 parameters. The 1st parameter is arr, it's a 2D array, 
it contains three 1D array. The 2nd parameter is d ，it's a string. The 3rd parameter is n, it's a number.

You can think of arr as a moat, the elements of arr like water constantly flow in. The direction of flow 
is controlled by the parameter d. The value of d can be "left" or "right". "left" means the "river" moves 
to the left. All elements in the 1D array are to the left moving n position, if beyond the bounds of the 
array and the element is moved to the tail on the left side of the array; if it exceeds the left boundary 
element would be moved to the tail of 3rd array(like a circle). Right is also similar to the operation, 
but it is moving to the right.
Finally, return arr.
*/

function infiniteLoop(arr,d,n){
//  Convert 2D Array to 1D Array and put this value to nums[] Array
    let nums = [];
    for (let element of arr) {
      nums.push(...element);
    }
    
//  Count the number of 1D array in 2D arr
    function getLength (arr) {
      let arrLength = [];
      for (let i = 0; i < arr.length; i++) {
        arrLength.push(arr[i].length);
      }
      return arrLength;
    }
    let Length = getLength(arr);
    
//  for Moving Left
    if (d === "left") {
      let count = 0;
      while (count < n) {
        nums.push(nums.shift());
        count++;
      }
      let result = [];
      for (let i = 0; i < Length.length; i++) {
        result.push(nums.splice(0, Length[i]));
      }
      return result;
    }
    
//  For Moving Right
    if (d === "right") {
      let count = 0;
      while (count < n) {
        nums.unshift(nums.pop());
        count++;
      }
      let result = [];
      for (let i = 0; i < Length.length; i++) {
        result.push(nums.splice(0, Length[i]));
      }
      return result;
    }
}

infiniteLoop( [[1,2,3],[4,5,6],[7,8,9]],"left",1);
infiniteLoop( [[1,2,3],[4,5,6],[7,8,9]],"right",1);
infiniteLoop( [[1,2],[3,4,5,6],[7,8,9,10]],"left",2);