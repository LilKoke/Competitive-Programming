 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char in;
    vector<char> ch;
    while(cin>>in){
        ch.push_back(in);
    }
    vector<int> ans(26);
    int s = ch.size();
    rep(j,s){
        rep(i,26){
            if(ch[j]==(97+i)||ch[j]==(65+i)){
                ans[i]++;
            }
        }
    }
    rep(i,26){
        cout<<(char)(97+i)<<" : "<<ans[i]<<endl;
    }
    return 0;
}