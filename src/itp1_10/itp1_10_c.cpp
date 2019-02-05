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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int count=0;
    vector<double> out;
    while(1){
        double n;
        cin>>n;
        if(n==0) break;
        vector<double> v(n);
        REP(i,n) cin>>v[i];
        double m = accumulate(all(v),0)/n;
        double ans = 0;
        REP(i,n) ans += (v[i]-m)*(v[i]-m);
        ans/=n;
        ans = sqrt(ans);
        out.push_back(ans);
        count++;
    }
    REP(i,count){
        cout<<fixed;
        cout<<setprecision(5)<<out[i]<<endl;
    }
    return 0;
}