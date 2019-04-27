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
    vector<int> ans;
    
    if(a+k>b) k=b-a;
    REP(i,k){
        ans.push_back(a+i);
    }
    if(a+k-1>b-k+1) k-= a+k-(b-k)-1;
    REP(i,k){
        ans.push_back(b-i);
    }
    sort(all(ans));
    REP(i,ans.size()) print(ans[i]);
    return 0;
}