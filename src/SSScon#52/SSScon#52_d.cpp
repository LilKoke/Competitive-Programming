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
ll distance(ll x,ll y,ll a,ll b){
    return abs(b-y) + abs(a-x);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll w, h;
    cin>>w>>h;
    int n;
    cin>>n;
    vector<int> x(n),y(n);
    REP(i,n) cin>>x[i]>>y[i];
    ll closex = (accumulate(all(x),0)+(n-1))/n;
    ll closey = (accumulate(all(y),0)+(n-1))/n;
    ll last = -1;
    ll TIME = 0;
    ll ansx, ansy;
    ll anstime = linf;
    for(ll j = closex; j>=closex-1;j--){
        for(ll k = closey; k>=closey-1; k--){
            REP(i,n){
                last = max(distance(j, k, x[i],y[i]), last);
                TIME += distance(j,k,x[i],y[i])*2;
            }
            TIME -= last;
            print(TIME);
            if(anstime>TIME) {
                ansx = j;
                ansy = k;
                anstime = TIME;
            }
            TIME = 0;
            last = -1;
        }
    }
    print(anstime);
    cout<<ansx<<" "<<ansy<<endl;

    return 0;
}