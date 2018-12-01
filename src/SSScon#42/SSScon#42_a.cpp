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
    int l, a, b, c, d;
    cin>>l>>a>>b>>c>>d;
    int japday = (a+(c-1))/c;
    int matday = (b+(d-1))/d;
    print(l-max(japday, matday));
return 0;
}