 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99

typedef long long ll;
typedef pair<int, int> P;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin>>n>>m;//n=prefecture m=city
    vector<vector<P > > v(n);
    REP(i,m){
        int p, y;//
        cin >> p >> y;
        P temp;
        p--;
        temp.first = y; temp.second = i;
        v[p].push_back(temp);
        //v[i].push_back(P(p,y));
    }
    vector<P> ans(m);

    REP(i,n){
        sort(all(v[i]));
        // v[i][j] := i個目の県の中でｊ番目に速く誕生した市の誕生した年と市の番号
        REP(j,v[i].size()){
            ans[v[i][j].second] = P(i + 1,j + 1);
        }
    }   

    REP(i,m){
        printf("%06d%06d\n", ans[i].first, ans[i].second);
    }
    
}