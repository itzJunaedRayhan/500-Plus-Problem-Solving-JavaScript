//  Task:
/*
Write a single generic function named printArray; this function must take an array of generic elements as 
a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor 
tests your function.
*/

// Write your code here
template<typename Element>
void printArray (vector<Element> arr) {
    for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << endl;
}