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
        int flag = 1;
        while(flag){
            flag = 0;
            for(int j = n-1; j>i; j--){
                if(a[j]<a[j-1]){
                    swap(a[j],a[j-1]);
                    cnt++;
                    flag = 1;
                }
            }
        }
    }
    cout<<a[0];
    FOR(i,1,n){
        cout<<" "<<a[i];        
    }
    cout<<endl;
    print(cnt);
    return 0;
}