//  Task:
/*
Write a Person class with an instance variable,ag , and a constructor that takes an integer, initialAge 
as a parameter. The constructor must assign initialAge to age after confirming the argument passed as 
initialAge is not negative; if a negative argument is passed as initialAge, the constructor should 
set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following 
instance methods:

1.  yearPasses() should increase the age instance variable by 1.
2.  amIOld() should perform the following conditional actions:
    2.1     If age < 13 print You are young..
    2.2     If age >= 13 and age < 18 print You are a teenager..
    2.3     Otherwise, print You are old..
To help you learn by example and complete this challenge, much of the code is provided for you, 
but you'll be writing everything in the future. The code that creates each instance of your Person 
class is in the main method. Don't worry if you don't understand it all quite yet!
*/

function Person(initialAge) {
  // Add some more code to run some checks on initialAge
  class Person {
    constructor(initialAge) {
      this.age = initialAge;
    }
    age = this.age;
  }
  let result = new Person(initialAge);
  this.amIOld = function () {
    // Do some computations in here and print out the correct statement to the console
    if (result.age < 0) {
      result.age = 0;
      console.log("Age is not valid, setting age to 0.");
    }
    if (result.age < 13 && result.age >= 0) {
      console.log("You are young.");
    } else if (result.age >= 13 && result.age < 18) {
      console.log("You are a teenager.");
    } else {
      console.log("You are old.");
    }
  };
  this.yearPasses = function () {
    // Increment the age of the person in here
    result.age++;
  };
}
