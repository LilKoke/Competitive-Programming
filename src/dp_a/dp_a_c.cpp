 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long

typedef pair<lint, lint> P;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    cin>>n;
    vector<lint> a(n);
    REP(i,n) cin>>a[i];
    vector<lint> b(n);
    REP(i,n) cin>>b[i];
    vector<lint> c(n);
    REP(i,n) cin>>c[i];
    vector<lint> dp(n);
    REP(i,n){
        if(dp[i] != dp[i-1]) dp[i] = max(a[i],b[i],c[i]);
    }
    return 0;
}