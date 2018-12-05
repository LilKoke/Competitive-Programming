 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99

typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l, a, b, c, d;cin >> l >> a >> b >> c >> d;
    int study = max((a+(c-1))/c, (b+(d-1))/d);
    int ans = l - study;
    cout<<ans<<endl;
    return 0;
}