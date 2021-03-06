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

string judge(string s, string p){
    s += s.substr(0,p.length()-1);
    REP(i,s.length()){
        if(s.substr(i,p.length()) == p) return "Yes";
        else continue;
    }
    return "No";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin>>s;
    string p; cin>>p;
    print(judge(s,p));
    return 0;
}