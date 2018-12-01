#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    int sum;
    int ans = 0;
    int i, j;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            sum = a[i]+a[j];
            if (sum%3==0){
            ans++;
            }
        }
    }
    
    
    print(ans);
return 0;
}