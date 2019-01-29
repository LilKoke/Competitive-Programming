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
 
int n, m;
int ans = 0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    vector<int> a(m), b(m), l(m);
    REP(j,m) cin>>a[j]>>b[j]>>l[j];
    REP(i,m-1){
        if(b[i] == a[i+1]){
            if(l[i] + l[i+1] == 2540) ans++;
        }
    }
    print(ans);
    return 0;
}