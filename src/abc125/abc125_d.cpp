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
    lint n; cin>>n;
    vector<lint> a(n); 
    REP(i,n) cin>>a[i];
    vector<lint> dp(n);
    bool flag = false;
    REP(i,n){
        if(i==0){
            dp[i] = max(a[i],-a[i]);
            if(a[i]*(-1)>a[i]) flag = true;
        }
        else{
            if(!flag){
                dp[i] = max(dp[i-1]+a[i], dp[i-1]-2*a[i-1]+a[i]);
                if(dp[i-1]+a[i]<dp[i-1]-2*a[i-1]+a[i]) flag = true; 
            }
            else{
                dp[i] = max(dp[i-1]-a[i], dp[i-1]+2*a[i-1]+a[i]);
                if(dp[i-1]+a[i]>dp[i-1]-2*a[i-1]+a[i]) flag = false; 
                
            }
        }
        print(dp[i]);
    }
    //print(dp[n-1]);

    return 0;
}