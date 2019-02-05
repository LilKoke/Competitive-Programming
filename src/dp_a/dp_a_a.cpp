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
    int n;
    cin>>n;
    vector<int> h(n);
    REP(i,n) cin>>h[i];
    int dp[n];
    dp[0] = 0;
    REP(i,n-1){
        if(i==0) dp[i+1] = abs(h[i+1]-h[i]);
        else if(i<=n-2&&i>=1) dp[i+1] = min(dp[i]+abs(h[i+1]-h[i]), dp[i-1]+abs(h[i+1]-h[i-1]));
    }
    print(dp[n-1]);
    return 0;
}