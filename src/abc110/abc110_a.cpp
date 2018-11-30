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
    int A, B, C; cin >> A>> B>> C;
    int ans = max<int>({
        10 * A + B + C,
        A + 10 * B + C,
        A + B + 10 * C,
    });
    cout << ans << endl;    
return 0;
}