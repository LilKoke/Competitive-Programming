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
    int n, m, x, y; cin>>n>>m>>x>>y;
    vector<int> a(n), b(m);
    REP(i,n) cin>> a[i];
    REP(j,m) cin>> b[j];
    sort(all(a));
    sort(all(b));
    int point1, point2;
    int ans = 0;
    for(int z=x+1;z<=y;z++){
        point1 = 0;
        point2 = 0;
        REP(i,n){
            if(a[i]<z){
                point1= 1;
            }
        }
        REP(j,m){
            if(b[j]>=z){
            point2 = 1;
            }
        }
        
        if(point1 == 1 && point2 == 1){
            ans = 1;
            cout<<z<<endl;
        }        
    }


    if(ans == 0){
        print("War");
    } else {
        print("No War");
    }
return 0;
}