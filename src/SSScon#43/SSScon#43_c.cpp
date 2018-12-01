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
    string key; cin>>key;
    int n; cin>>n;
    vector<vector<string>> a(n);
    int in;
    REP(i,n){
        REP(j,m){
            cin>>in;
            b[i].push_back(in);
        }
    }
    print(ans);
return 0;
}