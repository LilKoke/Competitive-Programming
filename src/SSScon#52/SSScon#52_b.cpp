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
    int n;
    cin>>n;
    int a, b;
    cin>>a>>b;
    vector<vector<int> > d(n);
    REP(i,n){
        REP(j,4){
            int in;
            cin>>in;
            d[i].push_back(in);
        }
    }
    vector<vector<int> > memo(a);
    REP(i,a){
        REP(j,b){
            memo[i].push_back(0);
        }
    }
    REP(i,n){
        for(int j = d[i][0]; j<d[i][2]; j++){
            for(int k = d[i][1]; k<d[i][3]; k++){
                memo[k][j]++;
            }
        }
    }
    int ans = 0;
    REP(i,a){
        REP(i,b){
            ans = max(memo[a][b], ans);
        }
    }
    print(ans);
    cin.tie(0);
    return 0;
}