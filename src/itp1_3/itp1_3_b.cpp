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
    vector<int>a(10001);
    REP(i,10000){
        cin>>a[i];
        if (a[i] == 0){
            break;
        }
    }
    REP(i,10000){
        cout<<"Case "<<i + 1<<": "<<a[i]<<endl;
        if (a[i] == 0){
            break;
        }
    }
        
return 0;
}