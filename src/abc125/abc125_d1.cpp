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
    lint n; cin>>n;
    vector<lint> a(n); 
    REP(i,n) cin>>a[i];
    lint cnt = 0;
    lint minimum = linf;
    REP(i,n){
        if(a[i]<0) cnt++;
        minimum = min(minimum, abs(a[i]));
    }
    lint ans = 0;
    if(cnt%2==1) ans -= 2*minimum;
    REP(i,n) ans += abs(a[i]);
    print(ans); 
    return 0;
}