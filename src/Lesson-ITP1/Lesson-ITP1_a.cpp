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
    string w; cin>>w;
    int ans = 0;
    string s;
    while(1){
        cin>>s;
        if (s == w){
            ans++;
        }
        else if (s == "END_OF_TEXT"){
        break;
        }
    }
    print(ans);
return 0;
}