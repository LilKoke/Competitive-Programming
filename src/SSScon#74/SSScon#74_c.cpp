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
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> x(n);
    REP(i,n){
        cin>>x[i];
    }
    int ans = 0;
    sort(all(x));
    REP(i,n/2){
        ans +=(n-i*2-1)*(x[n-i-1]-x[i]);
    }
    print(ans);
    return 0;
}