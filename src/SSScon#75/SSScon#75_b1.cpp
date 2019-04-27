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
    int a, b, k; cin>>a>>b>>k;
    if(a+k>=b||a+k-1>=b-k+1){
        REP(i,b-a+1) print(a+i);
    }
    else{
        REP(i,k) print(a+i);
        for(int i=k-1; i>=0; i--) print(b-i);
    }

    return 0;
}