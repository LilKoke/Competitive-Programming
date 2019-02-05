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
    int n, k;
    cin>>n>>k;
    vector<long long> t(n);
    REP(i,n) cin>>t[i];
    sort(all(t));
    int cnt = 0;
    vector<long long> memo;
    REP(i,n-1){
        memo.push_back(t[i+1]-(t[i]+1));
    }
    sort(all(memo), greater<ll>());
    ll ans = t[n-1]+1-t[0];
    REP(i,k-1){
        ans -= memo[i];
    }    
    print(ans);
    return 0;

}