//  Task: 
//    1.  String  starts with the prefix Mr., Mrs., Ms., Dr., or Er.
//    2.  The remainder of string  (i.e., the rest of the string after the prefix) consists of one or more upper and/or lowercase English alphabetic letters (i.e., [a-z] and [A-Z]).


function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match a string that starts with 'Mr.', 'Mrs.', 'Ms.', 'Dr.', or 'Er.', 
     * followed by one or more letters.
     */
    
    let re = RegExp(/^(Mr\.|Mrs\.|Ms\.|Dr\.|Er\.)\s?[a-z|A-Z]+$/);
    /*
     * Do not remove the return statement
     */
    return re;
}