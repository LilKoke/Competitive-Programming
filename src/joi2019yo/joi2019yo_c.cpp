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
    vector<bool> s(n);
    vector<char> in(n);
    REP(i,n){
        cin>>in[i];
        if(in[i] == 'O') s[i] = 1;
        else if (in[i] == 'X') s[i] = 0;
        else continue;
    }
    int count = 0;
    REP(i,n-1){
        if(s[i] != s[i+1]){
            count++;
            s[i+1] = s[i+2];            
        }
    }
    print(count);
    return 0;
}