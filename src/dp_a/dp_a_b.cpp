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
    vector<ll> h(n);
    REP(i,n) cin>>h[i];
    vector<ll> dp(n);
    REP(i,n){
        dp[i] = linf;
        dp[0] = 0;
    }
    REP(i,n){
        FOR(j,1,k+1){
            if(i+j<=n-1){
                dp[i+j] = min(dp[i]+abs(h[i+j]-h[i]), dp[i+j]);
            }
            else continue;
        }
    }
    print(dp[n-1]); 
    return 0;
}