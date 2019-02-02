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
    string s; cin>>s;
    int n; cin>>n;
    string o;
    int a, b;
    string in;
    vector<string> ans;
    int count = 0;
    REP(i,n){
        cin>>o>>a>>b;
        if(o=="replace"){
            cin>>in;
            s.replace(a,b-a+1,in);
        } else if (o == "reverse"){
            reverse(s.begin()+a,s.begin()+b+1);
        } else if (o== "print"){
            ans.push_back(s.substr(a,b-a+1));
            count++;
        }
    }
    REP(i,count) print(ans[i]);
    return 0;
}