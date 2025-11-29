#include <iostream>
using namespace std;

const int correctPass = 1999;

int main() {

int x;

while (true){
    cin>>x;

    if (x!=correctPass){
        cout<<"Wrong"<<endl;
    }
    else {
        cout<<"Correct"<<endl;
        break;
    }
}


    return 0;
}
