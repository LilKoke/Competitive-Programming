 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //input
    int n; cin>>n;
    vector<char> m(n);
    vector<int> f(n);
    REP(i,n) cin>>m[i]>>f[i];

    //BubbleSort
    REP(i,n){
        REP(j,n){
            if(f[j]<f[j-1]) swap(f[j])
        }
    }
    return 0;
}