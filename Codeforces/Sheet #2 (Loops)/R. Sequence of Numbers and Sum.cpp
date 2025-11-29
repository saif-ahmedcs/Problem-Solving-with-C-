#include <iostream>

using namespace std;

int main()
{


long long n=0, m=0;


 while (true){

   cin>>n>>m;
   long long sum=0;

    if (n<=0 || m<=0){
        break;
     }


    if (n>m){
     swap (n,m);
    }


    for (int i=n; i<=m; i++){
        cout<<i<<" ";
        sum+=i;
    }


 cout <<"sum ="<<sum<<endl;

 }

    return 0;
}
