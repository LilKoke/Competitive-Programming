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
    int a, b; cin>>a>>b;
    if((a==1&&b>2)||(a>b&&b!=1)){
        cout<<"Alice"<<endl;
    } else if((b==1&&a>2)||(b>a&&a!=1)){
        cout<<"Bob"<<endl;
    } else if (a==b){
        cout<<"Draw"<<endl;
    }
return 0;
}