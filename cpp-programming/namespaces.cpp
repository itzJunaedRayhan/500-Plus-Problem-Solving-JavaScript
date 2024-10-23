#include <bits/stdc++.h>
using namespace std;

//  For Multiple Namespace, varibale, function and classname should be different name:

namespace Junaed {
    int age = 24;
    void hello () {
        cout<<"Junaed NameSpace : "<<endl;
    }
}

namespace Ragnar {
    int age2 = 25;
    void hello2 () {
        cout<<"Junaed NameSpace : "<<endl;
    }
}

using namespace Junaed;
using namespace Ragnar;
int main() {
    cout<<Junaed::age<<endl;
    cout<<Ragnar::age2<<endl;
    
    cout<<age<<endl;
    cout<<age2<<endl;
    
    return 0;
}