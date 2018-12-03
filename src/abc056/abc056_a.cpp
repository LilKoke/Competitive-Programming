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
    char a,b; cin>>a>>b;
    char ans;
    if (a=='H'&&b=='H'){
        ans = 'H';
    }else if(a=='H'&&b=='D'){
        ans = 'D';
    }
    else if (a == 'D'&&b == 'H'){
        ans = 'D';
    }else if (a=='D'&&b=='D'){
        ans = 'H';
    }
    cout<<ans<<endl;
return 0;
}