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
    int n, m; cin>>n>>m;
    vector<int> a(m),b(m),cost(m);
    REP(i,m) cin>>a[i]>>b[i];
    int cmax = -inf;
    int sumcost=0;
    int counter=0;
    
    REP(i,m){
        if(a[i]<n){
            cost[i] = n-a[i];
            sumcost = sumcost + (n-a[i]);
            counter++;
            }
        
        
        if(cost[i] > cmax){
            cmax = cost[i];
        }
    }
    int netcost = sumcost;
    if (counter > 1){
        netcost = sumcost-cmax;
    }
    else {
        netcost = 0;
    }
    print(netcost);
    return 0;
}