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
    string t = s;
    int anss = 0;
    int anst = 1;
    FOR(i,1,s.length()){
        if(s[i-1]==s[i]){
            if(s[i-1]=='1') s[i] = '0';
            else s[i] = '1';
            anss++;
        }
    }

    if(t[0]=='0') t[0]='1';
    else t[0] = '0';

    FOR(i,1,t.length()){
        if(t[i-1]==t[i]){
            if(t[i-1]=='1') t[i] = '0';
            else t[i] = '1';
            anst++;
        }
    }
    int ans = min(anst,anss);
    print(ans);
    return 0;
}