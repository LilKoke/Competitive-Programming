#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define rep(i,n)  for (int i = 0; i < (n); i++)
#define all(a) a.begin(), (a).end()
#define gre(t) greater<t>()
#define inf 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    double t, a;
    cin >> n >> t >> a;
    vector<double> h(n);
    rep(i,n){
        cin >> h[i];
    }
    int ans;
    double best = inf;
    double tem = inf;
    rep(i,n){
        tem = abs(a-(t-(h[i]*0.006)));
        if(tem < best){
           best = tem; 
          ans  = i+1;
        }
    }
    print(ans);
}