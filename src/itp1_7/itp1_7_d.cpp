 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
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
    ll n, m, l; cin>>n>>m>>l;
    vector<vector<ll> > a(n);
    vector<vector<ll> > b(m);
    REP(i,n){
        REP(j,m){
            ll in; cin>>in;
            a[i].push_back(in);
        }
    }
    REP(i,m){
        REP(j,l){
            ll in; cin>>in;
            b[i].push_back(in);
        }
    }
    vector<vector<ll> > c(n);
    REP(i,n){
        REP(j,l){
            c[i].push_back(0);
        }
    }
    REP(i,n){
        REP(j,l){
            REP(k,m){
                c[i][j] += a[i][k]*b[k][j];
            }
            if(j == 0) cout<<c[i][j];
            else{
                cout<<" "<<c[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}