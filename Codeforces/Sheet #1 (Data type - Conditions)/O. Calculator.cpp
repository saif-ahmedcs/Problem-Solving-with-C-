#include <iostream>

using namespace std;

int main() {


long long a;
cin>>a;

char s;
cin>>s;

long long b;
cin>>b;


    if (s=='+'){
        cout<<a+b<<endl;
    }
    else if (s=='-'){
        cout<<a-b<<endl;
    }
    else if (s=='*'){
        cout<<a*b<<endl;
    }

    else if (s=='/'){
        cout<<a/b<<endl;
    }


return 0;
}
