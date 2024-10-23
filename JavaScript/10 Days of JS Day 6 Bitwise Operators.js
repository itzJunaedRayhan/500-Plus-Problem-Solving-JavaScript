//  Task:
//  1.  We define  to be a sequence of distinct sequential integers from  to ; in other words, . We want to know the maximum bitwise AND value of any two integers,  and  (where ), in sequence  that is also less than a given integer, .
//  2.  Complete the function in the editor so that given  and , it returns the maximum .

function getMaxLessThanK (n, k) {
    let current = -1;
    let max     = 0;
    for (let i = 1; i < k; i++) {
        for (let j = i + 1; j <= n; j++) {
            current = i & j;
            if (current < k && current > max) {
                max = current;
            }
        }
    }
    return max;
}