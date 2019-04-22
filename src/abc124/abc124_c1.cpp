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
    string s; cin>>s;
    int cnt0 = 0;
    int cnt1 = 0;

    REP(i,s.length()){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    int ans;

    if(s.length()==1) ans = 0;
    else if (cnt0 == 0||cnt1==0) ans = 1;
    else ans = min(cnt0,cnt1);
    print(ans);
    return 0;
}