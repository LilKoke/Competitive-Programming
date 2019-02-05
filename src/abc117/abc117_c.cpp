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
int ans(int n,int m,vector<int> x){
    sort(all(x));
    vector<int> sa(m-1);
    int ans = 0;
    if(n>=m) return ans;
    REP(i,m-1){
        sa[i] = x[i+1] - x[i];
        ans += sa[i];
    }
    sort(all(sa), greater<int>()); 
    REP(i,n-1){
        ans-=sa[i];
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    vector<int> x(m);
    REP(i,m) cin>>x[i];
    print(ans(n,m,x));
    return 0;
}