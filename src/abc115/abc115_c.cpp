#include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
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
    ll n, k; cin>>n>>k;
    vector<ll> h(n);
    REP(i,n) cin>>h[i];
    sort(all(h));
    ll ans = linf;
    ll temp;
    for(ll i = 0; i+k<=n;i++){
        temp = h[i+k-1] - h[i];
        ans = min(ans,temp);
    }
    print((ll)ans);
    return 0;
}