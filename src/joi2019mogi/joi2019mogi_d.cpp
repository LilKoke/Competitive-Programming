 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
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
    ll n, h; cin>>n>>h;
    vector<ll> a(n-1), b(n-1);
    REP(k,n-1) cin>>a[k]>>b[k]; //a=weight b=height
    ll sumhigh = accumulate(all(b),0);
    ll temp = 0;
    ll high = 0;
    if(sumhigh<h){
        cout<<-1<<endl;
    } else {
        for(ll i = 0;high<h;i++){
            temp += a[i]*(i+1);
            high += b[i];
        }
        cout<<temp<<endl;
    }

    return 0;
}