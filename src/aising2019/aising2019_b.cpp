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
    int a, b; cin>>a>>b;
    vector<int> p(n);
    REP(i,n) cin>>p[i];
    int one = 0;
    int two = 0;
    int three = 0;
    REP(i,n){
        if(p[i]<=a) one++;
        else if(p[i]>=a+1 && p[i]<=b) two++;
        else if(p[i] >= b+1) three++;
    }
    int ans = min({one, two, three});
    print((int)ans);
    return 0;
}