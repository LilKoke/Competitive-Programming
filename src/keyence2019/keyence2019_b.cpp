 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin>>s;
    string reals = s;
    int n = s.length()-1;
    bool flag = false;
    REP(i,8){
        if((s.substr(0,i)+s.substr(n+i-6,7-i))=="keyence"){
            flag=true; 
            break; 
        }
    }
    if(flag == true) print("YES");
    else if(flag == false) print("NO");
    return 0;
}

