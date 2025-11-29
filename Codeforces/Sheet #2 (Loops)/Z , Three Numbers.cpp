#include <iostream>

using namespace std;

int main()
{

long long k , s;
cin >> k >> s;
long long counter = 0;


  for (int i=0; i<=k; i++){


    for (int j=0; j<=k; j++){
        int z = s - i - j;
          if (0 <= z && z <= k) {
            counter++;
    }
    }

    }



    cout << counter << endl;

    return 0;
}
