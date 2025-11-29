#include <iostream>
#include <cmath>

using namespace std;


int main()
{


int length;
cin>>length;
int arr[length];
int i;
int MaxValue = 0 ;

  for (i=0; i<=length-1; i++){
     cin>>arr[i];
     if (arr[i]>MaxValue){
       MaxValue=arr[i];
    }
 }



cout<<MaxValue<<endl;



    return 0;

}
