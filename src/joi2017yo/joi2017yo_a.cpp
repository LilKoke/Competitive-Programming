#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d, e; cin>>a>>b>>c>>d>>e;
    int ans;
    if(a<0){
        ans = c*(-a) + d + (e*b);
    } else if (a==0){
        ans = d + (e*b);
    } else if (a>0){
        ans = e*(b-a);
    }
    cout<<ans<<endl;
return 0;
}