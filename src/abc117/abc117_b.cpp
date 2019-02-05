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
    int n;
    cin>>n;
    vector<int> l(n);
    REP(i,n) cin>>l[i];
    sort(all(l),greater<int>());
    int sum = 0;
    FOR(i,1,n){
        sum += l[i];
    }
    bool flag = false;
    if(sum>l[0]) flag = true;
    if(flag) print("Yes");
    else print("No");
    return 0;
}