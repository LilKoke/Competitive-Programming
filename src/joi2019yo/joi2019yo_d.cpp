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
    ll n; cin>>n;
    vector<ll> a(n);
    REP(i,n) cin>>a[i];
    ll maxAlti = 0;
    ll minAlti = inf;
    REP(i,n) {
        maxAlti = max(a[i],maxAlti);
        minAlti = min(a[i],minAlti);
    }

    ll ans = 0;
    for(ll sealevel = minAlti; sealevel<maxAlti; sealevel++){
        ll count = 0;
        REP(j,n){
            if (a[j]>sealevel){
                count++;
                if(a[j]>sealevel && a[j+1]>sealevel && j<n-1){
                    count--;
                }
            } 
        }
        ans = max(count,ans);
    }
    print((ll)ans);  
    return 0;
}