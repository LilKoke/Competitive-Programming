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
    int maxa = 0;
    REP(i,n) maxa = max(maxa, a[i]);
    int work = 0;
    int ans = 0;
    REP(i,maxa+1){ //0から新規の仕事の最大値 
        REP(j,n){ //０からn-1日目まで
            work += (a[j] - i);
            if(work<0){
                break;
            } else if(j == n-1){
                ans = i;
            } else continue;
        }
        work = 0; 
    }
    print(ans);
    return 0;
}