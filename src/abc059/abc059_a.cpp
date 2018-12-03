#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b, c; cin>>a >>b>>c;
    transform(all(a), a.begin(), ::toupper);
    transform(all(b), b.begin(), ::toupper);
    transform(all(c), c.begin(), ::toupper);
    cout<<a[0]<<b[0]<<c[0]<<endl;
return 0;
}