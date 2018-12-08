#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) a.begin(), (a).end()
#define inf 987654321
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, H, Cx, Cy, anshigh;
    cin >> n;
    vector<int> x(n), y(n),h(n),ansx(101),ansy(101);
    REP(i,n){
        cin>> x[i]>> y[i] >> h[i];
    }
    int temph;
    REP(i,101){
        REP(j,101){//for all choices of the cx and cy
            REP(k,n){
                temph = abs(x[k]-ansx[i]) + abs(y[k]-ansy[j]);
                if(temph==h[k]){
                    Cx = ansx[i];
                    Cy = ansy[j];
                    anshigh = max((abs(x[k]-ansx[i]) + abs(y[k]-ansy[j])),0);
                }         
            }
        }
    }
    
    cout<<Cx<<" "<<Cy<<" "<<anshigh<<endl;
}