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
    int a, b, c, d, p; cin>>a>>b>>c>>d>>p;
    int costx = a*p;
    int costy;
    if(p<=c){
        costy = b;
    } else {
        costy = b + (p-c)*d;
    }
    
    cout<<min(costx, costy)<<endl;
return 0;
}