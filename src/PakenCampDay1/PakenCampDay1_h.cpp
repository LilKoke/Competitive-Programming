 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m; cin>>n>>m;
    vector<ll> a(n), b(m);
    ll A = 0;
    ll B = 0;
    REP(i,n)
    {
        cin>>a[i];
        A+=a[i];
    } 
    REP(i,m)
    {
        cin>>b[i];
        B+=b[i];
    } 
    ll ans = A* B;
    print(ans);
    return 0;
}