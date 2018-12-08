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
    int n; cin>>n;//n players
    vector<vector<int> > a(n);//3回ゲームをした時の点数がN人分
    vector<vector<int> > b(n);//判定用
    int in;
    REP(i,n){
        REP(j,3){
            cin>>in;
            a[i].push_back(in);
            b[i].push_back(in);
        }
    }
    REP(j,3){//j回目について
        REP(i,n){//i人目のプレイヤーについて
            for(int k = i+1; k<n; k++){//プレイヤーiとは別のプレイヤーｋについて
                if(b[i][j] == b[k][j]){
                    a[i][j] = 0;
                    a[k][j] = 0;
                }
            }    
        }            
    }

    REP(i,n) {
        int ans = a[i][0] + a[i][1] + a[i][2];
        cout<<ans<<endl;
    }
    return 0;
}