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
    int n; cin>>n;
    string a,b,c; cin>>a>>b>>c;
    int ans = 0;
    REP(i,n){
        if(a[i]!=b[i]&&b[i]!=c[i]&&c[i]!=a[i]) ans += 2;
        else if(a[i]!=b[i]||b[i]!=c[i]||c[i]!=a[i]) ans++;
    }
    print(ans);
    return 0;
}