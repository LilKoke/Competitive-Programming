#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) a.begin(), (a).end()
#define inf = 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ax, ay, bx, by; cin>>ax>>ay>>bx>>by;
    int cx, cy, dx, dy;
    cx = ax - (by-ay);
    cy = ay + (bx-ax);
    dx = cx - (ay-cy);
    dy = cy + (ax-cx);
    cout<<dx<<" "<<dy<<" "<<cx<<" "<<cy;
return 0;
}