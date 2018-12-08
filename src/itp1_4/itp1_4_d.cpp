#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin>>n;
    vector<long long> a(n);
    long long min = inf;
    long long max = -inf;
    REP(i,n){
        cin>>a[i];
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
    } 
    long long sum = accumulate(all(a),0);
    cout<<min<<" "<<max<<" "<<sum<<endl;

return 0;
}