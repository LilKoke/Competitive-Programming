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
 
int n;
vector<int> a(n), b(n);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    REP(i,n){
        int in;
        cin>>in;
        a[i] = bitset<28>(in);
        print(a[i]);
    }
    REP(i,n){
        int in;
        cin>>in;
        b[i] = bitset<28>(in);
        print(b[i]);
    }

    return 0;
}