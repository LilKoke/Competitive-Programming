#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);

int main() {
    int n;
	cin >> n;
    int m = 2;
    if (n%m == 0){
        print (n);
    } 

    else if (n%m == 1){
        print (2*n);
    }
        
    return 0;
}

