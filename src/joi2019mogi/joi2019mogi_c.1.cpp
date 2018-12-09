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
    for(i64 i = 0; i < q; ++i){
    i64 x, y;
    cin >> x >> y;
    
    if(prex == 0 && prey == 0){
        ans += x;
    }else if(x == 0 && y == 0){
        ans += prex;
    }else{
        ans += min(abs(prex - x) + min(max(prey, y) - min(prey, y), abs(max(prey, y) - min(prey, y) - n)), x + prex);
    }
    prex = x;
    prey = y;
}
}
