#include <iostream>

using namespace std;

int main() {


double n;
cin>>n;;

int years = n /365 ;
int monthes = ((n - (years*365)) / 30);
int days = n - (years*365) - (monthes*30);

 cout << years <<" years"<<endl;
 cout << monthes << " months"<<endl;
 cout << days << " days" << endl;





return 0;
}
