#include <iostream>

using namespace std;

int main()
{

int n;
cin>>n;
int q=0;

 for (int i=1; i<=n; i++){


    for (int j=i+q; j<=((i+q)+2); j++){
        cout<<j<<" ";
    }
    cout<<"PUM"<<endl;

     q+=3;

 }


   return 0;
}
