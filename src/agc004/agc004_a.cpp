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
    vector<lint> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(all(v));
    lint ans;
    if((v[0]*v[1]*v[2])%2==0) ans = 0;
    else ans = v[0]*v[1];
    print(ans);
    return 0;
}