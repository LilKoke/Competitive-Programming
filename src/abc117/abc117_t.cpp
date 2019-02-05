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
    int n; cin>>n;
    int k; cin>>k;
    vector<ll> a(n);
    REP(i,n) cin>>a[i];
    vector<P > bit(41);
    REP(i,41){
        bit[i].second = i;
    }
    REP(i,n){
         for(int j = 40;j>=0;j--){
            while(pow(2,j)<=a[i]){
                a[i] -= pow(2,j);
                bit[j].first += 1;
            }
         }   
    }
    sort(all(bit),greater<>());
    ll x = 0;
    REP(i,41){
        if(bit[i].first != 0){
        x += pow(2,bit[i].second);
        }
    }
    print(x);
    REP(i,41){
        print(bit[i].first);
    }
}