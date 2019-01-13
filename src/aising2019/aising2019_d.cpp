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
    int n, q; cin>>n>>q;
    vector<ll> reala(n);
    REP(i,n) cin>>reala[i];
    vector<ll> x(q);
    REP(i,q) cin>>x[i];
    vector<ll> a(n);
    REP(i,q){
        int waa = 0;
        int wat = 0;
        REP(reset,n) a[reset] = reala[reset];
        REP(k,n){
            sort(all(a));
            wat += a[n-1];
            //print(a[n-1]);
            a[n-1] = 0;
            int sa = 0;
            int anssa = inf;
            int ans = inf;
            int chosen;
            REP(j,n){
                if(a[j] == 0) continue;
                else {
                    sa = abs(a[i]-x[j]);
                    if(anssa>sa) {
                        ans = a[j];
                        anssa = sa;
                        chosen = j;
                    } else if(anssa == sa){
                        if(ans>a[j]) {
                            ans = a[j];
                            chosen = j;
                        }
                    }
                }
            }
            a[chosen] = 0;
            
        }
        print(wat);


    return 0;
}