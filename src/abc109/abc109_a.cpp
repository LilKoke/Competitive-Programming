#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) a.begin(), (a).end()
#define inf = 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b; 
    cin >> a >> b;
    int ans = 0;
    for (int c = 1; c<=3; c++){
        if ((a * b * c) % 2 == 1){
            ans = 1;
        }        
    }
    if (ans == 1){
        print("Yes");
    }
    else{
        print("No");
    }
return 0;
}