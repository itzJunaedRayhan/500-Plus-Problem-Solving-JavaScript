//  Task:
//  1.  First, print each vowel in  on a new line. The English vowels are a, e, i, o, and u, and each vowel must be printed in the same order as it appeared in .
//  2.  Second, print each consonant (i.e., non-vowel) in  on a new line in the same order as it appeared in .

function vowelsAndConsonants(s) {
    const vowels = 'aeiou';

    for (let index = 0 ; index < s.length ; index++) {
        if (vowels.includes(s[index])) {
            console.log(s[index]);
        }
    }

    for (let index = 0 ; index < s.length ; index++) {
        if (!vowels.includes(s[index])) {
            console.log(s[index]);
        }
    }
}