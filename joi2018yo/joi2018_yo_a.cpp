#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);

int main(){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    if ((n+a-1)/a * b < (n+c-1)/c * d){
        print ((n+a-1)/a * b);
    }
    else{
        print ((n+c-1)/c * d);
    }
        return 0;
}
