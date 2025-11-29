#include <iostream>
#include <cmath>

using namespace std;


int main()
{
const int MAX=1000;
int legnth;
cin>>legnth;

int arr[MAX];
long long result[MAX];



for (int i = 0; i<=legnth-1; i++){
    cin>>arr[i];
    long long fact=1;
    for (int j=1; j<=arr[i];j++){
     fact*=j;
    }
    result[i]=fact;

}


for (int i=0; i<=legnth-1; i++){
    cout<<result[i]<<endl;
}



    return 0;

}
