#include<bits/stdc++.h>
using namespace std;

int main () {
    map<string, int> mp;
    mp["Sakib Al Hassan"] = 79;         //  O(LogN);
    mp.insert({"Mushfiq", 100});        //  O(logN)
    mp.insert({"Mushfiq", 100});        //  O(logN)
    mp.insert({"Hridoy", 70});
    mp["Miraz"] = 80;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp.count("Shanto")<<endl;

    /*
    Output:
    Hridoy 70
    Miraz 80
    Mushfiq 100
    Sakib Al Hassan 79
    0
    */

    return 0;
}