 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    vector<pair<ll,ll>> w(n);
    REP(i,n) cin>>a[i]>>b[i];
    REP(i,n) {
        w[i].first = a[i] + b[i];
        w[i].second = i;
    }
    sort(w.begin(), w.end());
    ll ans = 0;
    REP(i,n){
        if(i%2==0){
            ans += a[w[i].second];
        } else ans -= a[w[i].second];  
    }
    print(ans);
    return 0;
}