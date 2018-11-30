#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf = 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin>>n>>m; //input the number of students and sticks
    vector<int>p(n);
    REP(i,n){
        cin>> p[i];
    } //input the numbers on runners
    //int t = how many sticks they have used    
    for (int t=1; t<m+1; t++){ 
        //cout << t << endl;
        REP(i,n-1){
            if ((p[i])%t > (p[i+1])%t){
                swap(p[i], p[i+1]);   
            }
        }
        
    }
    //output
    REP(i, n){
        print(p[i]);
    }
}