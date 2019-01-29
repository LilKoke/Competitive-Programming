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
    string in;
    int length;
    int ans = 0;
    while(in!="0"){
        cin>>in;
        length = in.length();
        vector<string> num(length);
        REP(i,length){
            num[i] = in[i];
            ans += stoi(num[i]);
        }
        if(in!="0"){
            print(ans);
        }
        ans = 0;        
    }
    return 0;
}