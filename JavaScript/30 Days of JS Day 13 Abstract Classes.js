//  Task:
/*
Given a Book class and a Solution class, write a MyBook class that does the following:
1.  Inherits from Book.
2.  Has a parameterized constructor taking these 3 parameters:
    2.1.  string title
    2.2.  string author
    2.3.  int price
3.  Implements the Book class' abstract display() method so it prints these 3 lines:
    Title:, a space, and then the current instance's title.
    Author:, a space, and then the current instance's author.
    Price:, a space, and then the current instance's price.
*/

class MyBook extends Book {
    constructor (title, author, price) {
        super(title, author);
        this.title  = title;
        this.author = author;
        this.price  = price;
    }
    display () {
        console.log(`Title: ${this.title}\nAuthor: ${this.author}\nPrice: ${this.price}`);
    }
}