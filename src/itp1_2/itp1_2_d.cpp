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
    int w, h, x, y, r; cin>>w>>h>>x>>y>>r;
    if (x>=r&&(x+r)<=w&&y>=r&&(y+r)<=h){
        print("Yes");
    } else {
        print("No");
    }
return 0;
}