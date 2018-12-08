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
    int n; cin>>n;
    vector<string>w(n);
    REP(i,n)cin>>w[i];
    int ans = 1;
    REP(i,n-1){
        for(int j = i+1; j<n; j++){
            if(w[i] == w[j]){
                ans = 0;
            }  
        }
    }
    REP(i,n-1){
        if(w[i].back()!= w[i+1].front()){
            ans = 0;
        }
    }

    if(ans == 0){
        cout<<"No"<<endl;
    } else if (ans == 1){
        cout<<"Yes"<<endl;
    }
    return 0;
}