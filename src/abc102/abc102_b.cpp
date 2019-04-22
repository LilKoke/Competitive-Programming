#include "bits/stdc++.h"
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];//入力
    
    sort(a.begin(),a.end()); //小さい順に配列を並び替える
    
    print(a[n-1]-a[0]);//配列の最後から最初を引けば最大の数ー最小の数になっている
    return 0;
}