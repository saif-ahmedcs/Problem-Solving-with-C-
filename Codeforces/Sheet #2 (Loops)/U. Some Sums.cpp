#include <iostream>

using namespace std;

int main()
{

int n,x,y;
cin>>n>>x>>y;
int totalsum=0;

for (int i=1; i<=n; i++){
int sum=0;
int j=i;

    while (j>0){
       sum +=j%10;
       j/=10;
    }

    if (sum >=x && sum <=y){
        totalsum+=i;
    }

}


cout<<totalsum<<endl;


    return 0;
}
