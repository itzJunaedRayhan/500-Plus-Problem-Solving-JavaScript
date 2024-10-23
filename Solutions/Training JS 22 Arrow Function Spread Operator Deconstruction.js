//  Task:
/*
Create a function shuffleIt. The function accepts two or more parameters. The first parameter arr is 
an array of numbers, followed by an arbitrary number of numeric arrays. Each numeric array contains 
two numbers, which are indices for elements in arr (the numbers will always be within bounds). 
For every such array, swap the elements.

Example:
shuffleIt([1,2,3,4,5],[1,2]) should return [1,3,2,4,5]
shuffleIt([1,2,3,4,5],[1,2],[3,4]) should return [1,3,2,5,4]
shuffleIt([1,2,3,4,5],[1,2],[3,4],[2,3]) should return [1,3,5,2,4]
*/

let shuffleIt = (arr, ...args) => {
    for (let i = 0; i < args.length; i++){
      let [x,y] = [args[i][0], args[i][1]];
      [arr[x], arr[y]] = [arr[y], arr[x]];
    }
    return arr;
}
shuffleIt([1,2,3,4,5],[1,2]);
shuffleIt([1,2,3,4,5],[1,2],[3,4]);
shuffleIt([1,2,3,4,5],[1,2],[3,4],[2,3]);