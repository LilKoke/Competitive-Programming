 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99

typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int total; cin>>total;
    vector<int> a(9);
    REP(i,9) cin>>a[i];
    int ans = total - accumulate(all(a),0);
    cout<<ans<<endl;
    return 0;
}