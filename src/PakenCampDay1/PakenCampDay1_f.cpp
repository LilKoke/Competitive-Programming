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
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    sort(all(a));
    int mineven;
    REP(i,n){
        if(a[i]%2 == 1) {
            mineven = a[i];
            break;
        } else continue;
    }
    int sum = accumulate(all(a),0);
    if(sum%2 == 0) print(sum/2);
    else print((sum-mineven)/2);
    return 0;
}