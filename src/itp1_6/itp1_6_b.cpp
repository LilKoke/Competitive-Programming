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
    vector<pair<char, int> > p(n);
    REP(i,n) cin>>p[i].first>>p[i].second;
    vector<int> s(13), c(13), h(13), d(13);
    FOR(i,1,14) {
        s[i] = i;
        c[i] = i;
        h[i] = i;
        d[i] = i;
    }
    REP(i,n){
        if(p[i].first == 'S'){
            s[p[i].second] = 0;            
        } else if(p[i].first == 'C'){
            c[p[i].second] = 0;            
        } else if(p[i].first == 'H'){
            h[p[i].second] = 0;            
        } else if(p[i].first == 'D'){
            d[p[i].second] = 0;            
        }
    }
    FOR(i,1,14) if(s[i] != 0) cout<<'S'<<" "<<i<<endl;
    FOR(i,1,14) if(h[i] != 0) cout<<'H'<<" "<<i<<endl;
    FOR(i,1,14) if(c[i] != 0) cout<<'C'<<" "<<i<<endl;
    FOR(i,1,14) if(d[i] != 0) cout<<'D'<<" "<<i<<endl; 
    return 0;
}