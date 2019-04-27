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
    int a,b,c; cin>>a>>b>>c;
    int ans = 0;
    if(b<c) swap(b,c);
    if(a<b) swap(a,b);
    ans+=a-b;
    c+=a-b;
    ans+=((a-c)+1)/2;
    if((a-c)%2!=0) ans++;
    print(ans);
    return 0;
}