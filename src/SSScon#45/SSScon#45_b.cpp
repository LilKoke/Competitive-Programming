#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 1999999999
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin>>n>>m;
    vector<long long> a(n),b(n),c(m),d(m),dist(m);
    vector<int>ans(n), tem(m);
    REP(i,n) cin>>a[i]>>b[i];
    REP(j,m) cin>>c[j]>>d[j];
    REP(i,n){
        int temp = inf;
        REP(j,m){
            dist[j] = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if(dist[j] < temp){
                temp = dist[j];
                ans[i] = j;
            }
        }
    }
    REP(i,n) cout<<ans[i]+1<<endl; 
return 0;
}