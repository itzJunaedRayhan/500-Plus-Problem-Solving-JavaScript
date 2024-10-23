#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    list<char> stackList;

    void push (char value) {
        stackList.push_back(value);
    }

    void pop () {
        stackList.pop_back();
    }

    char top () {
        return stackList.back();
    }

    int size () {
        return stackList.size();
    }

    bool empty () {
        if (stackList.size() == 0) return true;
        else return false;
    }
};

int main () {
    int T;
    cin>>T;

    for (int i = 0; i < T; i++) {
        myStack colorStack;
        int N;
        cin>>N;
        string colors;
        cin>>colors;

        for (char color : colors) {
            if (!colorStack.empty()) {
                char topColor = colorStack.top();

                if ((topColor == 'R' && color == 'R') || (topColor == 'G' && color == 'G') || (topColor == 'B' && color == 'B')) {
                    colorStack.pop();
                } else if ((topColor == 'R' && color == 'B') || (topColor == 'B' && color == 'R')) {
                    colorStack.pop(); 
                    if (colorStack.top() == 'P') colorStack.pop();
                    else colorStack.push('P');
                } else if ((topColor == 'R' && color == 'G') || (topColor == 'G' && color == 'R')) {
                    colorStack.pop();
                    if (colorStack.top() == 'Y') colorStack.pop();
                    else colorStack.push('Y');
                } else if ((topColor == 'B' && color == 'G') || (topColor == 'G' && color == 'B')) {
                    colorStack.pop();
                    if (colorStack.top() == 'C') colorStack.pop();
                    else colorStack.push('C');
                } else colorStack.push(color);
            } else {
                colorStack.push(color);
            }
        }

        string result = "";
        while (!colorStack.empty()) {
            result += colorStack.top();
            colorStack.pop();
        }
        reverse(result.begin(), result.end());
        cout<<result<<endl;
        
    }
    return 0;
}