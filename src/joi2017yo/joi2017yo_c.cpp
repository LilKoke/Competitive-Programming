#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, d; cin>>n>>m>>d;
    vector<vector<char>> v(n);
    char in;
    REP(i,n){
        REP(j,m){
            cin>>in;
            v[i].push_back(in);
        }
    }
    int yoko = n-d+1;
    int tate = m-d+1;
    int ans = 0;
    if(d<=m){
        REP(i,yoko){
            REP(j,m){
                REP(k,d){
                    if(v[i+k][m] == '#'){
                        break;    
                    }
                }
                ans++;
            }
        }
    }
    if(d<=n){
        REP(i,tate){
            REP(j,n){
                REP(k,d){
                    if(v[i+k][n] == '#'){
                        break;    
                    }
                }
                ans++;
            }
        }
    }
    cout<<ans<<endl;
return 0;
}
