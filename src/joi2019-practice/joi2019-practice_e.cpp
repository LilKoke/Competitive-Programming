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
    ll mod;
    ll count = 0;
    for(int i = 2; mod != 3; i++) {
        int a = pow(3,i);
        int b = pow(10,5);
        mod = a % b;
        count++;}
        cout<<count + 1<<endl;
    return 0;
}