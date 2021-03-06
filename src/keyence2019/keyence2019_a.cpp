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
    vector<int> n(4);
    REP(i,4) cin>>n[i];
    sort(all(n));
    if(n[0] == 1 && n[1] == 4 && n[2] == 7 && n[3] == 9) print("YES");
    else print("NO");
    return 0;
}