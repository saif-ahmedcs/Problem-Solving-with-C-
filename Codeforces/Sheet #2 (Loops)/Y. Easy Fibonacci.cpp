#include <iostream>
#include <string>

using namespace std;

int main()
{

int n;
cin>>n;
int arr[100];


  for (int i=1; i<=n; i++){

    if (i==1){
        arr[i]=0;
    }
    else if (i==2){
        arr[i]=1;
    }
    else {
        arr[i] = arr[i-1] + arr[i-2];
    }

  }


for (int i=1; i<=n; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}

