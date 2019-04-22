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
    string s; cin>>s;
    int n = s.length();
    vector<bool> v(4,false);
    REP(i,n){
        if(s[i]=='E') v[0] = true;
        else if(s[i]=='W') v[1] = true;
        else if(s[i]=='S') v[2] = true;
        else if(s[i]=='N') v[3] = true;
    }
    string ans = "Yes";
    REP(i,4){
        if(v[0]!=v[1]) ans = "No";
        else if(v[2]!=v[3]) ans = "No";
    }
    print(ans);
    return 0;
}