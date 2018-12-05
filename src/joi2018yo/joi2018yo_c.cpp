 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99

typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h,w; cin>>h>>w;
    vector<vector<int> > a(h);

    REP(m,h){
        REP(n,w){
            int in;
            cin>>in;
            a[m].push_back(in);
        }
    }
    
    ll ans = inf;
    REP(i,h){
        REP(j,w){
            ll sum = 0;
            REP(m,h){
                REP(n,w){
                    ll temp = 0;
                    ll distj = abs(j - n); 
                    ll distm = abs(i - m);
                    if (distj<distm){
                        temp = a[m][n] * distj;
                        sum += temp;
                    } else {
                        temp = a[m][n] * distm;
                        sum += temp;
                    }
                }
            }
            ans = min(ans,sum);
        }
    }
    cout<<ans<<endl;

    return 0;
}