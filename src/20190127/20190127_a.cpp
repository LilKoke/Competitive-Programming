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

vector<int> v(999);
int a, b, ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    REP(i,999) v[i] = (i+2)*(i+1)/2;
    cin>>a>>b;
    ans = v[b-a-1] - b;
    print(ans);
    return 0;
}