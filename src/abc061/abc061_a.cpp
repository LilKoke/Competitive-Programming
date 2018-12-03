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
    int a, b, c;cin>>a>>b>>c;
    if(c>=a&&c<=b){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
return 0;
}