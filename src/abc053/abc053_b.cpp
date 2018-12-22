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
    string s; cin>>s;
    int ans = 0;
    int tempa, tempz;
    while(1){
        tempa = s.find_first_of('A');
        tempz = s.find_first_of('Z');
        s.erase(s.begin() + tempa);
        s.erase(s.begin() + tempz);
        int temp = tempz-tempa + 1;
        int ans = max(temp, ans);
        if(tempa == string::npos || tempz == string::npos){
            break;
        }
    }
    
    print(ans);
return 0;
}