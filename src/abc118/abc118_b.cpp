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
    int n, m; cin>>n>>m;
    vector<int> a(m,0);
    REP(i,n){
        int k; cin>>k;
        REP(j,k){
            int in; cin>>in;
            a[in-1]++;
        }
    }
    int ans = 0;
    REP(i,m){
        if(a[i]==n) ans++;
    }
    print(ans);
    return 0;
}