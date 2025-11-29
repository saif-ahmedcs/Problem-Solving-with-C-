#include <iostream>

using namespace std;

int main()
{

int n;
cin>>n;


for (int i=1; i<=n; i++){

   for (int q=n-1; q>=i; q--){
    cout<<" ";
   }

   for (int j=1; j<=(2*i)-1; j++){
    cout<<"*";
   }

   cout<<endl;

}
int num=0;
for (int ii=1; ii<=n; ii++){


for (int qq=1; qq<ii; qq++){
    cout<<" ";
  }


  for (int jj = n+(n-1); jj>=2*ii-1; jj--){
    cout<<"*";
  }
  if (ii!=n){
  cout<<endl;}
  else {
  }


}

    return 0;
}
