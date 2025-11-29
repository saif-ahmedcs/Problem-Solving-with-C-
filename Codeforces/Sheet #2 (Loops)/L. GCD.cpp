#include <iostream>

using namespace std;

int main()
{


int a,b;
cin>>a>>b;
int maximum=0;


 for (int i=1; (i<=a && i<=b); i++){

    if (a%i==0 && b%i==0 && i>maximum){
        maximum=i;

    }

}

cout<<maximum<<endl;


    return 0;
}
