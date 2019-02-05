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

double Manhattan(int n, vector<int> x, vector<int> y){
    double man = 0;
    REP(i,n){
        man += abs(x[i]-y[i]);
    }
    return man; 
}

double Euclid(int n, vector<int> x, vector<int> y){
    double euc = 0;
    REP(i,n){
        euc += pow(abs(x[i]-y[i]), 2);
    }
    euc = pow(euc, 0.5);
    return euc;
}

double Triple(int n, vector<int> x, vector<int> y){
    double tri = 0;
    REP(i,n){
        tri += pow(abs(x[i]-y[i]), 3);
    }
    tri = pow(tri, 0.3333333333333333333333333);
    return tri;
}
double Chevyshev(int n, vector<int> x, vector<int> y){
    int ans = -1;
    REP(i,n){
        ans = max(ans, abs(x[i]-y[i]));
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> x(n);
    REP(i,n) cin>>x[i];
    vector<int> y(n);
    REP(i,n) cin>>y[i];
    cout<<fixed;
    cout<<setprecision(6)<<Manhattan(n, x, y)<<endl;
    cout<<setprecision(6)<<Euclid(n, x, y)<<endl;
    cout<<setprecision(6)<<Triple(n,x,y)<<endl;
    cout<<setprecision(6)<<Chevyshev(n,x,y)<<endl;
    return 0;
}