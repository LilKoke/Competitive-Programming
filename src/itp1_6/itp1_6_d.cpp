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
    int n, m; cin>>n>>m;
    vector<vector<int> > a(n);
    int in;
    REP(i,n){
        REP(j,m){
            cin>>in;
            a[i].push_back(in);
        }
    }
    vector<int> b(m);
    REP(i,m) cin>>b[i];
    vector<int> c(n);
    REP(i,n){
        REP(j,m){
            c[i] += a[i][j]*b[j];
        }
    }
    REP(i,n) cout<<c[i]<<endl;
    return 0;
}