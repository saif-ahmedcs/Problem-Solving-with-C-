#include <iostream>

using namespace std;

int main()
{


int x;
cin>>x;
bool isTrue= true;



 for (int i=2; i<=x-1; i++){

    if ( (x%i) == 0 ){
        isTrue = false;
        break;
    }
    else {
        isTrue=true;
    }
 }


 if (!isTrue){
    cout<<"NO"<<endl;
 }

 else if (isTrue){
    cout<<"YES"<<endl;
 }

    return 0;
}

