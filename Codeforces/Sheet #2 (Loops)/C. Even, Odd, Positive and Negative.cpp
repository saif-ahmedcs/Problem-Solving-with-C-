#include <iostream>

using namespace std;


int main()
{

int length;
cin>>length;
int arr[length];
int even=0,odd=0,negative=0,positive=0;


for (int i=0; i<=length-1;i++){
    cin>>arr[i];
     if (arr[i]%2==0){
        even++;
     }
     if (arr[i]%2!=0){
        odd++;
     }
     if (arr[i]>0){
        positive++;
     }
     if(arr[i]<0){
        negative++;
     }
}


cout<<"Even: "<<even << endl;
cout<<"Odd: "<<odd << endl;
cout<<"Positive: "<<positive << endl;
cout<<"Negative: "<<negative << endl;



    return 0;

}



