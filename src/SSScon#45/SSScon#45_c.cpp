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
    long long ans, x, y; cin>>x>>y;
    if (x>0 && y<0){
        ans = abs(abs(x) - abs(y)) + 1;
    } else if (x<0 && y>0) {
        ans = abs(abs(x) - abs(y)) + 1;
    } else if (x<0 && y<0 && x>y) {
        ans = abs(abs(x) - abs(y)) + 2;    
    } else if (x>0 && y>0 && x>y) {
        ans = abs(abs(x) - abs(y)) + 2;
    } else if (x==0 && y<0){
        ans = abs(abs(x) - abs(y)) + 1;
    } else if (x>0 && y==0){
        ans = abs(abs(x) - abs(y)) + 1;
    } else {
        ans = abs(abs(x) - abs(y));        
    }
    cout<<ans<<endl;
return 0;
}