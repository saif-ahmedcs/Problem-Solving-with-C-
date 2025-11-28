#include <iostream>
#include <cmath>

using namespace std;

int main() {

long double n;
cin>>n;


if (fmod(n,1.0)==0){
    cout<<"int "<<int(n)<<endl;
}
else {
    cout<<"float "<<int(n)<<" "<<n-int(n)<<endl;
}


return 0;
}
