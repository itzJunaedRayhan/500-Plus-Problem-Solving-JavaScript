//  Task:
/*
Coding in function fiveLine, function accept 1 parameter:s. s is a string.

Please return a string of 5 lines(newline symbol is \n). The first line has one s; 
Second line have two s; and so on..Fifth line have five s;
Example:

fiveLine("  a") should return "a\naa\naaa\naaaa\naaaaa"
a
aa
aaa
aaaa
aaaaa       <---The effect when you console.log it

fiveLine("  xy ") 
should return "xy\nxyxy\nxyxyxy\nxyxyxyxy\nxyxyxyxyxy"
xy
xyxy
xyxyxy
xyxyxyxy
xyxyxyxyxy  <---The effect when you console.log it
*/

function fiveLine(s){
    //coding here...
    let str = s.trim();
    let result = '';
    let newArr = [];
    for (let i = 0; i < 5; i++) {
      newArr.push(result += str)
    }
    return `${newArr[0]}\n${newArr[1]}\n${newArr[2]}\n${newArr[3]}\n${newArr[4]}`
}
fiveLine("  a");
fiveLine("\txy \n");
fiveLine("           Ok               ")