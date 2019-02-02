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
    string w;
    cin>>w;
    string in;
    vector<string> t;
    int count = 0;
    while(in!="END_OF_TEXT"){
        cin>>in;
        if(in == "END_OF_TEXT") break;
        transform(all(in), in.begin(), ::tolower);
        t.push_back(in);
        count++;
    }
    int ans = 0;
    REP(i,count){
        if(t[i] == w) ans++;
        else continue;
    }
    print(ans);
    return 0;
}