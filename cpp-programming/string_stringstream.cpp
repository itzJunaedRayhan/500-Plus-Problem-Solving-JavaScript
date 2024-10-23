#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);		//	Hello i am Junaed
    
    stringstream ss(s);
    string word;
    
    int count = 0;
    while (ss >> word) {
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
	
	
	/*
	Output:
	Hello
	i
	am
	Junaed
	4
	*/
    
    return 0;
}