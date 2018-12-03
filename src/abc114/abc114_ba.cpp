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
    for(int i = 0; i < s.length() - 2; ++i){
        for(int j = i + 1; j < s.length() - 1; ++j){
            for(int k = j + 1; k < s.length(); ++k){    
                int tem = abs(753-((int(s[i]) - int('0')) * 100 + (int(s[j]) - int('0')) * 10 + (int(s[k]) - int('0'))));
                if(tem<ans){
                    ans = tem;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}