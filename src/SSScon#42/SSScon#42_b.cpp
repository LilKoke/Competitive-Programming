#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    REP(i,n){
        cin>>a[i]>>b[i]>>c[i];
    }
    vector<int>scorea(2);
    vector<int>scoreb(2);
    vector<int>scorec(2);
    int ans;
    REP(i,n){
            if (a[i]==b[i]){
                scorea[0]=0;
                scoreb[0]=0;
            }
            else if (b[i]==c[i]){
                scoreb[1] = 0;
                scorec[1] = 0;
            }
            else if (c[i]==a[i]){
                scorec[2]=0;
                scorea[2]=0;
            }
        }
    
        print(accumulate(all(a),0));
        print(accumulate(all(b),0));
        print(accumulate(all(c),0));
    
           
}
    
        

    


