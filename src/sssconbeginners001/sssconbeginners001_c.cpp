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
    vector<string> s(n);
    REP(i,n) cin>>s[i];
    int m; cin>>m;
    vector<string> t(m);
    REP(i,m) cin>>t[i];
    string nows = s[0];
    int memo = 0;
    int cnt = 0;
    REP(j,n){
        if(s[j]!=" ") nows = s[j];
        REP(i,n)
        {
            if(nows == s[i]){
                cnt++;
                s[i] = " ";
            } else continue;
        }
        REP(i,m)
        {
            if(nows == t[i]){
                cnt--;
            } else continue;
        }
        memo = max(memo, cnt);
        cnt = 0;
    }
    print(memo);
    return 0;
}