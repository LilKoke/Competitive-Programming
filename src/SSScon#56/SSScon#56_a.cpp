 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<lint> a(n);
    REP(i,n) cin>>a[i];
    vector<lint> dp(n);
    REP(i,n) dp[i] = 1;
    REP(i,n){
        if(i ==0) dp[i] = 1;
        else{
            FOR(j,1,i+1){
                if(a[i]>a[i-j]){
                    dp[i] = max(dp[i], dp[i-j]+1);
                } 
            }
        }    
    }
    sort(all(dp));
    print(dp[n-1]);
    return 0;
}