//  Task:
/*
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort 
algorithm above. Once sorted, print the following 3 lines:
    1.  Array is sorted in numSwaps swaps. where numSwaps is the number of swaps that took place.
    2.  First Element: firstElement where firstElement is the first element in the sorted array.
    3.  Last Element: lastElement where lastElement is the last element in the sorted array.
Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.
*/

function main() {
    const n = parseInt(readLine().trim(), 10);
    const a = readLine().replace(/\s+$/g, '').split(' ').map(aTemp => parseInt(aTemp, 10));
    let swap  = 0;
    // Write your code here
    
    for (var i = 1; i < a.length; i++) {
        for (var j = 0; j < i; j++) {
            if (a[i] < a[j]) {
            var temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            swap++;
            }
        }
    }
        
    console.log(`Array is sorted in ${swap} swaps.`);
    console.log(`First Element: ${a[0]}`);
    console.log(`Last Element: ${a[a.length - 1]}`);
}