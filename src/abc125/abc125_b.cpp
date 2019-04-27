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
    vector<int> v(n), c(n), sa(n);
    REP(i,n) cin>>v[i];
    REP(i,n) cin>>c[i];
    REP(i,n) sa[i] = v[i]-c[i];
    int ans = 0;
    REP(i,n){
        if(sa[i]>0) ans+=sa[i];
    }
    print(ans);
    return 0;
}