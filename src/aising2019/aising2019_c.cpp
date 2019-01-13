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
    int h, w; cin>>h>>w;
    vector<vector<char> > s(h);
    REP(m,h){
        REP(n,w){
            char in;
            cin>>in;
            s[m].push_back(in);
        }
    }
    int ans = 0;
    REP(i,h){
        FOR(j,1,w){
            REP(k,h){
                for(int l = 0; l<j; l++){
                    char cone = s[i][j];
                    char ctwo = s[k][l];
                    if(cone == ctwo) continue;
                    else {
                        if(s[i][j] == s[i+1][j] && s[i][j] == s[i][j+1]) continue;
                        else if (s[k][l] == s[k+1][l] && s[k][l] == s[k][l+1]) continue;
                    
                    }
                    
                }
            }
        }
    }
    print(ans);

    return 0;
}