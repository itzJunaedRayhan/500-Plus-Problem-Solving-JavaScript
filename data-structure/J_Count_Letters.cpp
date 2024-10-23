#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int frequency[26] = {0};  // Frequency array for 26 letters
    cin>>S;
    

    for (int i = 0; i < S.size(); i++) {
        frequency[S[i] - 'a']++;
    }
    

    for (int i = 0; i < S.size(); i++) {
        if (frequency[i] > 0) {
            int asciiValue = 97+i; 
            char ch = asciiValue;
            cout<<ch<<" : "<<frequency[i]<<endl;
            
        }
    }
    
    return 0;
}