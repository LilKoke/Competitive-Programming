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
    vector<int> a(5);
    REP(i,5) cin>>a[i];
    int ans = 0;
    int minimum = inf;
    REP(i,5){
        ans += (a[i]+9)/10;
        a[i]%=10;
        if(a[i]!=0) minimum = min(minimum,a[i]);
    }
    ans*=10;
    if(minimum == inf) minimum = 10;
    ans +=minimum-10;
    print(ans);
    return 0;
}