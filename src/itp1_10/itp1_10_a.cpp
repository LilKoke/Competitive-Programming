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
    double x1, y1;
    cin>>x1>>y1;
    double x2, y2;
    cin>>x2>>y2;
    double answer = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout<<fixed;
    cout<<setprecision(5)<<answer<<endl;
    return 0;
}