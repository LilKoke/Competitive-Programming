#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    int tmp = 0; 
    for (int i = 0; i < n ; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n ; i++){
        if (a[i] == 1){
            tmp = tmp+1; 
            ans = max(tmp, ans);
        }
        else{
            tmp = 0;
            ans = max(tmp, ans);
        }    
    }
    print(ans+1);
}
