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
    int n, x;
    int ans = 0;
    while(1){
        cin>>n>>x;
        if(n==0)break;
        FOR(i,1,n-1)
        {
            FOR(j,i+1,n)
            {
                FOR(k,j+1,n+1)
                    if(i+j+k==x) ans++;
            }

        }
        print(ans);
        ans = 0;
    }
    return 0;
}