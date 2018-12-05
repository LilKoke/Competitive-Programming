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

    int n;cin>>n;
    vector<pair<int, int>>a(n);
    REP(i,n) {
        cin>> a[i].first>> a[i].second;
    }
    double ans = -inf;
    REP(i,n-3){
        FOR(j,1,n-2){
            FOR(k,2,n-1){
                FOR(l,3,n){
                    double absq = pow((a[i].first - a[j].first),2)+pow((a[i].second - a[j].second),2);
                    double bdsq = pow((a[j].first - a[l].first),2)+pow((a[j].second - a[l].second),2);
                    double cdsq = pow((a[k].first - a[l].first),2)+pow((a[k].second - a[l].second),2);
                    double acsq = pow((a[k].first - a[i].first),2)+pow((a[k].second - a[i].second),2);
                    double area = sqrt(absq) * sqrt(cdsq);
                    double costheta = absq + cdsq;
                    if(acsq + bdsq == cdsq + absq && area>ans && absq==cdsq){
                        ans = area;
                    }
                }
            }
        }        
    }
    if (ans == -inf){
        ans = 0;
    }
    cout<<ans<<endl;
    return 0;
}