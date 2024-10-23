//  Task:
// str, it's a string representing the string to pad, we need pad some "*" at leftside or rightside of str
// n, it's a number, how many times to pad the string.

function padIt(str,n){
    var count = 0;
    while ( count < n ) {
      count % 2 === 0 ?  str = '*' + str : str += '*';
      count ++
    }
    return str;
}

console.log(padIt('a', 1));
console.log(padIt('a', 2));
console.log(padIt('a', 3));
console.log(padIt('a', 4));
console.log(padIt('a', 5));