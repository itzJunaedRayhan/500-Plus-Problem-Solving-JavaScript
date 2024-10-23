//  Task:
/*
Complete the getLetter(s) function in the editor. It has one parameter: a string,
consisting of lowercase English alphabetic letters (i.e., a through z). 
It must return A, B, C, or D depending on the following criteria:
*/

function getLetter(s) {
    let letter;
    // Write your code here
    let str = s[0];
    switch (str) {
        case ('a' || 'e' || 'i' || 'o' || 'u'): 
            letter = 'A'
            break;
        
        case ('b' || 'c' || 'd' || 'f' || 'g'): 
            letter = 'B'
            break;
        
        case ('h' || 'j' || 'k' || 'l' || 'm'): 
            letter = 'C'
            break;

        case ('z' || 'p' || 'q' || 'r' || 's' || 't' || 'v' || 'w' || 'x' || 'y' || 'n'): 
            letter = 'D'
            break;

        default:
            letter = 'Your Input is Wrong'
            break;
    }
    return letter;
}