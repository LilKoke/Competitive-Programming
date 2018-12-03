#define _USE_MATH_DEFINES
#include "bits/stdc++.h"

using namespace std;

inline double circleArea( double radius) {
    return radius * radius * M_PI;
}


#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 1047483647

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r; cin >> r;
    double s, l;
    s = circleArea((double)r);
    l = 2 * M_PI * r;
    cout << fixed;
    print("hello");
    cout << setprecision(6) << s <<" " << l << endl; 
    return 0;
}