#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 9 || b >= 9){
        print (":(");
    }
    else if (a <= 8 && b <= 8){
        print ("Yay!");
    }
return 0;
}     
