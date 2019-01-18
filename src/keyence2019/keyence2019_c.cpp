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
    int n;cin>>n;
    vector<int> a(n), b(n),chokin(n),shakin(n);
    REP(i,n) cin>>a[i];
    REP(i,n) cin>>b[i];
    int ans;
    ans = 0;
    REP(i,n){
        if(a[i]>b[i]){
            chokin[i] = a[i]-b[i];
        }
        if(a[i]<b[i]){
            shakin[i] = (b[i]-a[i]);
            ans = 1;
        }
    }
    sort(all(chokin),greater<int>());
    sort(all(shakin),greater<int>());
    int j = 0;
    int change = 1;
    REP(i,n){
        if(shakin[i]!=0){
            if(chokin[j]>shakin[i]){
                chokin[j] = chokin[j]-shakin[i];
                change++;
                continue;
            } else if(chokin[j] == shakin[i]){
                chokin[j] = 0;
                shakin[i] = 0;
                j++;
                change++;
            } else {
                chokin[j] = 0;
                shakin[i] -= chokin[j];
                j++;
                change++;
                i--;
            }      
        } else break;
    }
    if(accumulate(all(a),0)<accumulate(all(b),0)){
        print(-1);
        ans = -1;
    }
    if(ans==0) print(0);
    else if (ans == 1) print(change);
    return 0;
}
