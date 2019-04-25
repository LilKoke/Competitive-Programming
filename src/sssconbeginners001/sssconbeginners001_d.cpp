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
    vector<vector<int> > c(3);
    REP(i,3){
        REP(j,3){
            int in; cin>>in;
            c[i].push_back(in);
        }
    }
    string ans = "Yes";
    
    REP(i,2){
        REP(j,2){
            if(c[i+1][j]-c[i][j]!=c[i+1][j+1]-c[i][j+1]) ans = "No";
        }
    }
    print(ans);

    return 0;
}