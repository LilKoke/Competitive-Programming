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
    vector<int> a(n), b(n);
    int wina = 0;
    int winb = 0;
    REP(i,n) {
        cin>>a[i]>>b[i];
        if(a[i]>b[i]) wina++;
        else if(a[i]<b[i]) winb++;
        else continue;
    }
    cout<<wina<<" "<<winb<<endl;
    return 0;
}