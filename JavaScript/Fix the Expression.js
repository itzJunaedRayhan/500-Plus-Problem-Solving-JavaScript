//  Fix The Expression:
/*
Fix the code in the Code tab so the function returns true if and only if x is equal to 7.

Examples:
isSeven(4) ➞ false
isSeven(9) ➞ false
isSeven(7) ➞ true

//  Before Fix the Expression is:
function isSeven(x) {
	return x="7"?false:true:false;
}
*/



//  After Fix the Expression is:
function isSeven(x) {
	return x === 7 ? true : false;
}

isSeven(8); //  false
isSeven(7); //  true