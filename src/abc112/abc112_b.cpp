#include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define inf 100000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, limit;
    //n個の帰宅経路がある
    //i番目の経路を使うと時間tで帰宅する
    //コストcかけて
    //limit時間以内に帰宅しなければならない
    cin>>n>>limit;
    int i;
    vector<int> c(n),t(n);
    for (int i=0; i<n; i++){
        cin>>c[i]>>t[i];          
    }
    int ans = inf;
    for (int i=0; i<n; ++i){
        if (limit>=t[i]){
            if (c[i]<ans){
                ans = c[i];
            }        
        }
    }
    if (ans == inf){
        cout << "TLE" << endl;
    }
    else {
        cout<<ans<<endl;    
    }
}