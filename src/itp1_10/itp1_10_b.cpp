 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define PI acos(-1)
#define rad(deg) deg * PI /180

typedef pair<int, int> P;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin>>a>>b>>c;
    double s, l, h;
    s = a*b*sin(rad(c))/2;
    l = a + b + sqrt(a*a + b*b - 2*a*b*cos(rad(c)));
    h = 2*s/a;
    cout<<fixed;
    cout<<setprecision(5)<<s<<endl;
    cout<<fixed;
    cout<<setprecision(5)<<l<<endl;
    cout<<fixed;
    cout<<setprecision(5)<<h<<endl;
    return 0;
}