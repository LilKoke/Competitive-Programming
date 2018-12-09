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
    int n,m; cin>>n>>m;
    vector<int> a(n);
    vector<P > p(m);
    REP(i,n) cin>>a[i];
    REP(i,m){
        cin>>p[i].first>>p[i].second;
    }
    temp = -inf;
    REP(j,m){
        templ = p[i].first;
        tempr = p[i].second;
    }

    return 0;
}