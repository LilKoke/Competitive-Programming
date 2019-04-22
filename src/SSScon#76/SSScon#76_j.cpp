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
    int n, m; cin>>n>>m;
    vector<string> a(n);
    vector<string> b(n);
    REP(i,n) cin>>a[i];
    REP(i,m) cin>>b[i];
    bool flag = false;
    string ans = "No";
    REP(i,n-m+1){
        REP(j,n-m+1){
            if(a[i][j] == b[0][0]){
                flag = true;
                REP(k,m){
                    if(flag)
                    REP(l,m){
                        if(a[i+k][j+l] != b[k][l]){
                            flag = false;
                        }
                    }
                }
                if(flag) ans = "Yes";
            }
        }
    }
    print(ans);
    return 0;
}