 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, c; cin>>n>>m>>c;
    vector<int> b(m);
    REP(i,m) cin>>b[i];
    int code = 0;
    int ans = 0;
    int in; 
    REP(i,n){
        REP(j,m){
            cin>>in;
            code += (in*b[j]);
        }
        if ((code + c) > 0) {
            ans++; 
        }
        code = 0;
    }
    print(ans);
    return 0;
}