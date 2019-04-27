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
    vector<int> x(n), sa(n-1);
    REP(i,n) cin>>x[i];
    sort(all(x),greater<int>());
    REP(i,n-1) sa[i]=x[i]-x[i+1];
    int ans = accumulate(all(sa),0)*(n-1);
    print(ans);
    return 0;
}