#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

string s,s2;
cin>>s;
s2=s;

while (!s.empty() && s[s.length()-1]=='0'){
    s.pop_back();
}

if (s.empty()) {

    cout << "0" << endl;
    cout << "YES" << endl;
    return 0;

}

else {

for (int i=s.length()-1; i>=0; i--){
    cout<<s[i];
}

}

cout<<endl;


bool IsPalindrome =true;

for (int i=0; i<s2.length()/2; i++){

    if(s2[i] != s2[s2.length()-1 -i]){
        IsPalindrome= false;
        break;
    }
}


if (IsPalindrome){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

    return 0;
}
