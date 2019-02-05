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
    REP(i,a){
        REP(i,b){
            
        }
    }
    cin.tie(0);
    return 0;
}