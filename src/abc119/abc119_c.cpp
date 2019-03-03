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
 
int minmp(int a)
{
    int mp = 0;
    REP(i,n){
        if(l[i]<a)
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    int a, b, c; cin>>a>>b>>c;
    vector<int> l(n);
    REP(i,n) cin>>l[i];
    sort(all(l));
    return 0;
}