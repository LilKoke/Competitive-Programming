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
    string s;
    int m;
    vector<string> ans;
    int count =0;
    while(1){
        cin>>s;
        if(s=="-") break;
        cin>>m;
        vector<int> h(m);
        REP(i,m) cin>>h[i];
        string taken, left;
        REP(i,m) {
            left = s.substr(0, h[i]);
            taken = s.substr(h[i],s.length()-h[i]+1);
            s = taken + left; 
        }
        if(s!="-"){
            ans.push_back(s);
            count++;
        } 
    }
    REP(i,count) print(ans[i]);
    return 0;
}