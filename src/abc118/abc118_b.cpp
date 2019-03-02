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
    int n,m;
    cin>>n>>m;
    vector<int> k(n);
    vector<bool> ans(m);
    vector<vector<bool> > check(n);
    vector<vector<int> > a(n);

    REP(i,m) ans[i] = true;
    REP(i,n){
        REP(j,m){
            check[i][j] = false;
        }
    }
    int in;
    REP(i,n){
        cin>>k[i];
        REP(j,k[i]){
            cin>>in;
            a[i].push_back(in);
            check[i][a[i][j]-1] = true;
        }
        REP(j,m){
            if(check[i][j]==false) ans[j] = false; 
        }
    }
    int count;
    REP(i,m){
        if(ans[i]==true) count++;
        else continue;
    }
    print(count);
    return 0;
}