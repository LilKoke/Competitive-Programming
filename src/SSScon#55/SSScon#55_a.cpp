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
    lint h, w;
    cin>>h>>w;
    vector<vector<char> > v(h);
    vector<vector<lint> > ans(h);
    vector<vector<bool> > flag(h);
    REP(i,h){
        REP(j,w){
            char in;
            cin>>in;
            v[i].push_back(in);
            ans[i].push_back(-1);
        }
    }
    REP(i,h){
        for(lint j = w-1; j>=0;j--){
            if(v[i][j] == 'c'){
                ans[i][j] = 0;
                lint l = j+1;
                while(l<w&&ans[i][l]==-1){
                    ans[i][l]++;
                    ans[i][l]+=l-j;
                    l++;
                }
            }
        }
    }
    REP(i,h){
        REP(j,w){
            if(j!=w-1) cout<<ans[i][j]<<" ";
            else cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}