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
    int n;cin>>n;
    vector<int> x(n);
    REP(i,n) cin>>x[i];
    int m;cin>>m;
    vector<int> a(m);
    REP(j,m) cin>>a[j]; 
    vector<int> flag(m);
    REP(i,m) flag[i] = 0;
    int target;

    REP(j,m) {
        target = x[a[j]-1]+1;
        for(int i = 0; i!=x[a[j]-1] && i<n; i++){
            if(target == x[i]) flag[j] = 1;
            else if(target > 2019) flag[j] = 1;
        }
        if(flag[j] == 0) x[a[j]-1]++;
    }
    int ans;
    REP(i,n) {
        ans = x[i];
        print(ans);
    }
    return 0;
}