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
    int n; cin>>n;
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    sort(all(a));
    int score = accumulate(all(a),0);
    int amari = score%10;
    bool flag = false;
    if(amari!=0) print(score);
    else if(amari==0){
        REP(i,a.size()){
            if(((score-a[i])%10)!=0){
                score-=a[i];
                flag = true;
                break;
            }
        }
        if(flag) print(score);
        else print(0);
    } 
    return 0;
}