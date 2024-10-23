//  Task:
/*
Coding in function whatNumberIsIt. function accept 1 parameter:n. it's a number.To judge 
the number n. If n is one of the above five constants, return one of these string:

"Input number is Number.MAX_VALUE"
"Input number is Number.MIN_VALUE"
"Input number is Number.NaN"
"Input number is Number.NEGATIVE_INFINITY"
"Input number is Number.POSITIVE_INFINITY"
*/



function whatNumberIsIt(n) {
  //coding here
  if (Number.MAX_VALUE === n) {
    return "Input number is Number.MAX_VALUE";
  }

  if (Number.MIN_VALUE === n) {
    return "Input number is Number.MIN_VALUE";
  }

  if (Number.NEGATIVE_INFINITY === n) {
    return "Input number is Number.NEGATIVE_INFINITY";
  }

  if (Number.POSITIVE_INFINITY === n) {
    return "Input number is Number.POSITIVE_INFINITY";
  }

  if (isNaN(n)) {
    return "Input number is Number.NaN";
  } else {
    return `Input number is ${n}`;
  }
}
whatNumberIsIt(1/0);
whatNumberIsIt(100);
whatNumberIsIt(1.7976931348623157e+308);
whatNumberIsIt(5e-324);
whatNumberIsIt(-Number.MAX_VALUE*2);
whatNumberIsIt(NaN);
whatNumberIsIt(Infinity+1);
