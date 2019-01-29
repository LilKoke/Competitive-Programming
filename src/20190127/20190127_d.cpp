 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 100000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;
ll n;
vector<ll> x(n), c(n), v(n);
vector<P > copy(n);
ll stop = 0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    REP(i,n) cin>>x[i];
    REP(i,n) cin>>c[i];
    REP(i,n) cin>>v[i];
    REP(i,n){
        taka += x[i];
        REP(j,n){
            if(taka>=c[j] && c[j] != -1){
                if(c[j]>stop){
                    ans = j;
                    stop = c[j];
                } else if (c[j] == stop){
                    if(v[j] > v[ans]){
                        ans = j;
                        stop = c[j];
                    }
                }
            }
        }
        c[ans] = -1;
        v[ans] = -1;
        REP(i,n) {
            copy[i].first = v[i];
            copy[i].second = c[i];
                 
        sort(all(copy));


    }
    return 0;
}