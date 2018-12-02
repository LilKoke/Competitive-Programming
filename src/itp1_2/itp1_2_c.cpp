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
    vector<int> n(3);
    REP(i,3) cin>>n[i];
    sort(all(n));
    cout<<(int)n[0]<<" ";
    cout<<(int)n[1]<<" ";
    cout<<(int)n[2];
return 0;
}