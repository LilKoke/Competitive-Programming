 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin>>s;
    int a=0;
    int z;
    bool flag = false;
    REP(i,s.length()){
        if(s[i]=='A'&&flag==false){
            a = i;
            flag = true;
        } 
        else if(s[i]=='Z') z = i;
    }
    print(z-a+1); 
    return 0;
}