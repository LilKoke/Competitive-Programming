 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(lint i=(a);i<(b);i++)
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
    int a, b;
    cin>>a>>b;
    int n;
    cin>>n;
    vector<P > p(n);
    REP(i,n) cin>>p[i].second>>p[i].first;
    vector<vector<int> > dp(b);
    REP(i,b)
    {
        REP(j,a)
        {
            dp[i].push_back(0);
        }
    }
    REP(i,b)
    {
        REP(j,a)
        {   
            if(i==0&&j==0) dp[i][j] = 1;
            else if(j==0) dp[i][j] = dp[i-1][j];
            else if(i==0) dp[i][j] = dp[i][j-1];
            else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
            REP(k,n)
            {
                dp[p[k].first-1][p[k].second-1] = 0;
            }
        }
    }
    cout<<dp[b-1][a-1]<<endl;
    return 0;
}