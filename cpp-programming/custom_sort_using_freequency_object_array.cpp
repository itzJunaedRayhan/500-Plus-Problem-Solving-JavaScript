#include<bits/stdc++.h>
using namespace std;

class CustomSort {
    public:
    char c;
    int cnt;
};

bool cmp (CustomSort a, CustomSort b) {
    if (a.cnt > b.cnt) return true; 
    else return false;
};

int main () {
    int n;
    cin>>n; 

    //  declare 26 array of object:
    CustomSort frq[26];                 


    for (int i = 0; i < 26; i++) {
        frq[i].c = (i + 'a');           //  frq[i].c = a to z;
        frq[i].cnt = 0;                 //  initial value of a to z is -> 0
    }



    //  get input as character and increase its index value
    for (int i = 0; i < n; i++) {
        char c;
        cin>>c;
        frq[c - 'a'].cnt++;             
    }


    //  Sorting in Descending Way:
    sort(frq, frq+26, cmp);


    //  Print
    for (int i = 0; i < 26; i++) {
        //  We will work character count greater than 0:
        if (frq[i].cnt > 0) {
            //  For Loop will go throuh number of characters:
            for (int j = 0; j < frq[i].cnt; j++)    
            cout<<frq[i].c;
        }
    }

    return 0;

/*
    Input:
    11
    abzabdzzbzz

    Output:
    zzzzzbbbaad
*/
}


