#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) a.begin(), (a).end()
#define inf = 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a(5);
    REP(i,5) {
        cin>>a[i];
        if (a[i] < 40){
            a[i] = 40;
        }
    }
    int sum = accumulate(all(a), 0);
    print(sum/5); 
return 0;
}