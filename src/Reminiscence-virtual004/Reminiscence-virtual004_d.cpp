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
    int d, x; cin>>d>>x;
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    vector<int> c(n,1);
    REP(i,n){
        int cnt = a[i]+1;
        while(cnt<=d){
            cnt+=a[i];
            c[i]++;
        }
    }
    int ans = accumulate(all(c),0) + x;
    print(ans);
    return 0;
}