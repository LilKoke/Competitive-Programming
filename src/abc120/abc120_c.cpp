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
    bool flag = true;
    int ans = 0;
    while(flag){
        flag = false;
        REP(i,s.length()-1){
            if(s.length()!=2&&s[i]!=s[i+1]){
                s= s.substr(0,i) + s.substr(i+2,s.length()-i-2);
                ans+=2;
                flag = true;
            } else {
                if(s[0]!=s[1]) ans+=2;
            }
        }
    }
    print(ans);   
    return 0;
}