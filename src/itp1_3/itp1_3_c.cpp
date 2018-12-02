#include "bits/stdc++.h"

using namespace std;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, y; cin>>x>>y;
    while(!(x==0&&y==0)){
        if(y<x) cout << y << " " << x << endl;
        else cout << x << " " << y << endl;
        cin >> x >> y;
    }
return 0;
}