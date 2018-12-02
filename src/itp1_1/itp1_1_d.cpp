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
    int S; cin>>S;
    int h, m, s;
    h=S/3600;
    m=(S-(h*3600))/60;
    s=S - h*3600 - m*60;
    cout<<h<<":"<<m<<":"<<s<<endl;
return 0;
}