#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;

 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a(4);
    for (int i = 0; i < 4;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
        
    for (int i = 3; i < 5;i++){
        cin >> a[i];
    }
    if (a[3]<a[4]){
        print(a[0] + a[1] + a[2] + a[4]);        
    }
    else{
        print(a[0] + a[1] + a[2] + a[3]);        

    }
        
}