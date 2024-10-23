//  Task:
/*
Given a 6 x 6 2D Array, :
Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.
a b c
  d
e f g

Sample Input:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0


Contains the following hourglasses:
1 1 1   1 1 0   1 0 0   0 0 0
  1       0       0       0
1 1 1   1 1 0   1 0 0   0 0 0

0 1 0   1 0 0   0 0 0   0 0 0
  1       1       0       0
0 0 2   0 2 4   2 4 4   4 4 0

1 1 1   1 1 0   1 0 0   0 0 0
  0       2       4       4
0 0 0   0 0 2   0 2 0   2 0 0

0 0 2   0 2 4   2 4 4   4 4 0
  0       0       2       0
0 0 1   0 1 2   1 2 4   2 4 0

The hourglass with the maximum sum () is:
2 4 4
  2
1 2 4
*/


function main() {
    let arr = Array(6);
    let arr1 = [], arr2 = [], arr3 = [], arr4 = [];
    for (let i = 0; i < 6; i++) {
        arr[i] = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));
    }

    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length; j++) {
            arr1.push(arr[i].slice(j, j+3));  
            arr3.push(arr[i].slice(j, j+3));
            arr2.push(arr.map(ele => ele.slice(1, 5))); 
        }
    }
    arr1 = arr1.filter(e => e.length === 3).splice(0, 16);
    arr3 = arr3.filter(e => e.length === 3).splice(8)
    arr2 = arr2[0].splice(1, 4).reduce((a, b) => a.concat(b), []);
    
    for (let l = 0; l < 16; l++) {
        arr1[l].push(arr2[l]);
        arr1[l].push(arr3[l][0], arr3[l][1], arr3[l][2]);
        arr1[l] = arr1[l].reduce((a, b) => a + b, 0)
    }
    console.log(Math.max(...arr1))
}