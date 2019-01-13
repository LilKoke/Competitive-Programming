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
    int n; cin>>n;
    vector<vector<int> > v(n);
    int in;
    REP(i,n){
        REP(j,4){ 
        cin>>in;
        v[i].push_back(in);
        }
    }
    vector<vector<int> > info(12);
    REP(i,12){
        REP(j,10) info[i].push_back(0);
    }
    REP(i,n) {
        info[((v[i][0]-1)*3 + v[i][1]-1)][v[i][2]-1] += v[i][3];
        if(info[((v[i][0]-1)*3 + v[i][1]-1)][v[i][2]-1] < 0) info[((v[i][0]-1)*3 + v[i][1]-1)][v[i][2]-1] = 0;
        if(info[((v[i][0]-1)*3 + v[i][1]-1)][v[i][2]-1] > 9) info[((v[i][0]-1)*3 + v[i][1]-1)][v[i][2]-1] = 9; 
    }
    REP(i,3){
        REP(j,10) cout<<" "<<info[i][j];
        cout<<endl;
    }
    cout<<"####################"<<endl;
    FOR(i,3,6){
        REP(j,10) cout<<" "<<info[i][j];
        cout<<endl;
    }
    cout<<"####################"<<endl;
    FOR(i,6,9){
        REP(j,10) cout<<" "<<info[i][j];
        cout<<endl;
    }
    cout<<"####################"<<endl;
    FOR(i,9,12){
        REP(j,10) cout<<" "<<info[i][j];
        cout<<endl;
    }
    return 0;
}