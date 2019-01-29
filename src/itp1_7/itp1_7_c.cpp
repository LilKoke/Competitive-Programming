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
    int r, c; cin>>r>>c;
    int n[r+1][c+1];
    REP(i,r+1){
        REP(j,c+1){
            n[i][j] = 0;
        }
    }
    REP(i,r){
        REP(j,c){
            cin>>n[i][j];
            n[i][c] += n[i][j];
            n[r][j] += n[i][j];
            n[r][c] += n[i][j]; 
        }
    }
    REP(i,r+1){
        REP(j,c+1){
            if(j == 0) cout<<n[i][j]; 
            else {
            cout<<" "<<n[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}