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




switch (s){
 case '=':
     if (a == b){
        cout<<"Right"<<endl;
     }
     else {
        cout<<"Wrong"<<endl;
     }
     break;

 case '<':
   if (a<b){
    cout<<"Right"<<endl;
   }
    else {
    cout<<"Wrong"<<endl;
    }
    break;

  case '>':
   if (a>b){
    cout<<"Right"<<endl;
   }
    else {
    cout<<"Wrong"<<endl;
    }
 break;
 }



return 0;
}
