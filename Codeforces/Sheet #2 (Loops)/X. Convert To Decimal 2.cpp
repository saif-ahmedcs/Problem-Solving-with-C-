#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

int t;
cin>>t;
int result =0;
int reminder=0;

vector <int> vec;


  for (int i=0; i<t; i++){
    int num;
    cin>>num;
  int numOfOnes=0;


      while (num>0){

         reminder= num%2;
         vec.push_back(reminder);
         num/=2;

      }

    for (int i=0; i<vec.size()/2; i++){

    int temp = vec[i];
    vec[i] = vec[vec.size()-i-1];
    vec[vec.size()-i-1] = temp;
  }


    for (int i=0; i<vec.size(); i++){

    if (vec[i]==1){
        numOfOnes++;
    }

  }

  int finalresult = pow(2,numOfOnes)-1;
  cout<< finalresult<<endl;

  vec.clear();


  }





    return 0;
}
