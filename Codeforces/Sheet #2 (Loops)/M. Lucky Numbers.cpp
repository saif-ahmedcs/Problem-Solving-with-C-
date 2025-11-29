#include <iostream>

using namespace std;

int main()
{


long long a,b,x,y;
cin>>a>>b;

x=min(a,b);
y=max(a,b);
bool isfalse = false;

  for (int i=x; i<=y; i++){

  bool isLucky = true;
  int j=i;

        while (j>0){

            if (j%10 != 4 && j%10 != 7){
             isLucky = false;
             break;
            }
            else {
                j/=10;
            }
        }

  if (isLucky){
    cout<<i<<" ";
    isfalse = true;

  }

  }


  if (!isfalse){
    cout<<-1;
  }


    return 0;
}
