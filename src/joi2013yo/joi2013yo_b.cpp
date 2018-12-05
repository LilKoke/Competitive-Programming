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
    int n; cin>>n;
    vector<vector<int> > a(n);
    int in;
    REP(i,n){
        REP(j,3){
            cin>>in;
            a[i].push_back(in);
        }
    }
    vector<int> score(n);
    
    REP(j,3){
        REP(i,n-1){
            for(int k = 1; k>i && k<n; k++){
                if(a[i][j] == a[k][j]){
                    a[i][j] = 0;
                    a[k][j] = 0;
                }
                         
            }    
        }            
    }
    return 0;
}