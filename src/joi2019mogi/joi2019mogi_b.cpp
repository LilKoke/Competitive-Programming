 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
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
    ll n,m; cin>>n>>m;
    vector<ll> a(n), b(m);
    REP(i,n)cin>>a[i];
    REP(j,m)cin>>b[j];
    ll t; cin>>t;
    vector<vector<ll> > d(t);
    ll in;
    REP(k,t){
        REP(l,3){
            cin>>in;
            d[k].push_back(in);
        }
    }
    REP(k,t){//the number of attacks:t
        if(d[k][0] == 1){
            if(a[d[k][1]-1]>=b[d[k][2]-1]){
                a[d[k][1]-1] -= b[d[k][2]-1];
                b[d[k][2]-1] = 0;
            }else if(a[d[k][1]-1]<b[d[k][2]-1]){
                b[d[k][2]-1] -= a[d[k][1]-1];
                a[d[k][1]-1] = 0;
            }else if(a[d[k][1]-1] == 0){
                continue;
            }
        } else if (d[k][0] == 2){
            if(b[d[k][1]-1]>=a[d[k][2]-1]){
                b[d[k][1]-1] -= a[d[k][2]-1];
                a[d[k][2]-1] = 0;
            }else if(b[d[k][1]-1]<a[d[k][2]-1] ){
                a[d[k][2]-1] -= b[d[k][1]-1];
                b[d[k][1]-1] = 0;
            }else if(b[d[k][1]-1] == 0){
                continue;
            }
        }
    }
ll suma = accumulate(all(a),0);
ll sumb = accumulate(all(b),0);    
    cout<<suma<<endl;
    cout<<sumb<<endl;

    return 0;
}