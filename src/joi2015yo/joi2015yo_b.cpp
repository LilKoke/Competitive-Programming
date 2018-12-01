#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define add1to(a) (a)=(a)+1
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin>>n>>m;
    vector<int> a(m),c(n),score(n);
    vector<vector<int>>b(m);
    int in;
    REP(i, m) cin>>a[i];
    REP(i,m){
        REP(j,n){
            cin>>in;
            b[i].push_back(in);
        }
    }
    int x;    
    REP(j,n){
        REP(i,m){
            //まずターゲットだったら
            if (a[i]==b[j]){
                add1to(score[j]);
                REP(j, n){
                    if (b[j]!=a[i]){
                        add1to(score[j]);
                    }
                } 
            }
            //ターゲットじゃないときの得点
            else if (a[i]!=b[j]) {
                REP(j, n){
                    if (b[j] = a[i])
                        add1to(score[j]);
                }
            }
            
        }
    print(score[j]);
    score[j] = 0;
    }

return 0;
}