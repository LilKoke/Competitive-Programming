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
    int h, w;
    while(1){
        cin>>h>>w;
        if(h==0 && w==0) break;
        REP(i,h){
            if (i==0 || i==h-1){
                REP(j,w) cout<<"#";
                cout<<endl;
            } else {
                cout<<"#";
                REP(j,w-2) cout<<".";
                cout<<"#"<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}