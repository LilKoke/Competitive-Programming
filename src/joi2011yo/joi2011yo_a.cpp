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
    vector<int>pasta(3), juice(2);
    for (int i = 0; i < 3; i++){
        cin >> pasta[i];
    }
    REP(j,2){
        cin >> juice[j];
    }
    int cost;
    int ans=0;
    int tempp = inf;
    int tempj = inf;
    REP(i,3){
        REP(j,2){
            tempp = min(pasta[i],tempp);
            tempj = min(juice[j],tempj);    
            ans = tempp+tempj;

        }
    }
    print(ans-50);
    
    
return 0;
}
