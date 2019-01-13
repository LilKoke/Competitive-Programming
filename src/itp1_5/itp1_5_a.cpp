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
    int a, b;
    while (1){
        cin>>a>>b;
        if (a==0 && b==0) break;
        REP(i,a){
            REP(j,b){
                cout<<"#";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}