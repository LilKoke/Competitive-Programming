#include "bits/stdc++.h"
#include <string>
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
    string s;
    cin >> s;
    int ans = inf;
    REP(i,s.length()-2){
        int n = stoi(s.substr(i,3));
        int tem=abs(753-n);
        if (ans>tem){
            ans = tem;
        }
    }
    cout<<ans<<endl;
    return 0;
}