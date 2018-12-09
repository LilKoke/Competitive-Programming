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
    int d; cin>>d;
    if(d==22){
        print("Christmas Eve Eve Eve");
    } else if (d==23){
        print("Christmas Eve Eve");
    } else if (d==24){
        print("Christmas Eve");
    } else if (d==25){
        print("Christmas");
    }
    return 0;
}