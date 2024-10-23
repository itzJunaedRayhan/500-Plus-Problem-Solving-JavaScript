// Task:
/*
You are given two classes, Person and Student, where Person is the base class and Student is the derived 
class. Completed code for Person and a declaration for Student are provided for you in the editor. 
Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has 4 parameters:
    1.  A string, firstName.
    2.  A string, lastName.
    3.  An integer, idNumber.
    4.  An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character 
representative of their calculated average:

Grade System:
    grade >= 90 => 'O';
    grade >= 80 => 'E';
    grade >= 70 => 'A';
    grade >= 55 => 'P';
    grade >= 40 => 'D';
    grade < 40  => 'T';
*/

class Student extends Person {
    constructor(firstName, lastName, identification, scores) {
        super(firstName, lastName, identification);
        this.Scores = scores;
    }
    calculate() {
        let count = this.Scores.length;
        let arr = this.Scores.reduce((a, b) => a + b, 0) / count;
        if (arr >= 90) return 'O';
        if (arr >= 80) return 'E';
        if (arr >= 70) return 'A';
        if (arr >= 55) return 'P';
        if (arr >= 40) return 'D';
        if (arr < 40)  return 'T';
    }
}