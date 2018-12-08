 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;

int factorial( int x )
{
int tmp = x;
for( int i = 1; i < x-1 ;++i )
tmp *= x-i;
return tmp;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m, n, q; cin>>m>>n>>q;
    vector<P > p(q);
    REP(i,q) cin>>p[i].first>>p[i].second;
    REP(i,m){}
    return 0;
}