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

int ans = 0;
int maximum = 0;
int cur = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> h(n);
    REP(i,n) {
        cin>>h[i];
        maximum = max(maximum, h[i]);
    }
    FOR(i,1,maximum){
        REP(j,n){
            if(h[j]!=0) {
                h[j]--;
            }
        }
        REP(j,n){
            if(h[j]==0){
                ans++;
                if(j!=0 && h[j-1]==h[j]){
                    ans--;
                }
            }
            print(ans);
        }
    }
    print(ans);
    return 0;
}