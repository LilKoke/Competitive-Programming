 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;

int euclid( int a, int b ){
    int temp;

    if( a < b ) { temp = a; a = b; b = temp; }
    if( b < 1 ) return -1;

    if( a % b == 0 ) return b;
    return euclid( b, a % b );
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    vector<int> l(n);
    vector<int> r(n);
    l[0] = a[0];
    r[0] = a[n-1];
    REP(i,n-1) l[i] = euclid(a[i],l[i-1]);
    for(int i = n-1; i>0; i--) r[i] = euclid(a[i],r[i-1]);
    int ans;
    REP(i,n-1){

    }
    //print(ans);
    return 0;
}