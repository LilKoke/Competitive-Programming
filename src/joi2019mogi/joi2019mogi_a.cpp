 #include "bits/stdc++.h"

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    double ans = (((((((n-10)*3)+10)/2)+15)*2/3)-n)*3+48;
    cout<<ans<<endl;
    return 0;
}