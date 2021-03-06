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
bool isprime(int x){
    if(x==2) return true;
    else if(x<2 || x%2 == 0) return false;
    int i = 3;
    while(i<=sqrt(x)){  
        if(x%i==0) return false;
        i = i + 2;
    }
    return true;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    int cnt = 0;
    REP(i,n){
        cin>>a[i];
        if(isprime(a[i])) cnt++;
    }
    print(cnt);
    return 0;
}