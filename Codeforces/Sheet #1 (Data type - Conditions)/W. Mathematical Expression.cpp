#include <iostream>
#include <cmath>

using namespace std;

int main() {

long long a;
cin>>a;

char s;
cin>>s;

long long b;
cin>>b;

char q;
cin>>q;

long long c;
cin>>c;



if (s == '+' && q =='='){
    if (a + b == c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<a+b<<endl;
    }
}

else if (s=='-' && q=='='){
    if (a - b == c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<a-b<<endl;
    }
}

else if (s=='*' && q=='='){
    if (a * b == c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<a*b<<endl;
    }
}



return 0;
}
