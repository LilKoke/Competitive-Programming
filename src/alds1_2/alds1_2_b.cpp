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
    int cnt = 0;
    vector<int> a(n);
    REP(i,n) cin>>a[i];
    REP(i,n){
        int minj = i;
        FOR(j,i,n){
            if(a[j]<a[minj]){
                minj = j;
            }
        }
        if(minj != i) cnt++;
        swap(a[i],a[minj]);
    }
    cout<<a[0];
    FOR(i,1,n){
        cout<<" "<<a[i];        
    }
    cout<<endl;
    print(cnt);
    return 0;
}