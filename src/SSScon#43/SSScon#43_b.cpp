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
    vector<int> a(10),b(10);
    REP(i,10) cin>>a[i];
    REP(j,10) cin>>b[j];
    sort(all(a),greater<int>());
    sort(all(b),greater<int>());
    int wans = a[0] + a[1] + a[2];
    int kans = b[0] + b[1] + b[2];
    cout<<wans<<" "<<kans<<endl;
return 0;
}