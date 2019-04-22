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
    int a, b; cin>>a>>b;
    string ans;
    if(a<=0&&b>=0) ans = "Zero";
    else if(a<0&&abs(-a-b)%2==0) ans = "Negative";
    else ans = "Positive";
    print(ans);
    return 0;
}