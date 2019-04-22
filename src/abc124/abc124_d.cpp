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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    s+='2';
    int cnt = 0;
    vector<int> v;
    char init = s[0];
    int ans = 0;
    int now = 0;
    bool flag = false;
    REP(i,n+1){

        if(init==s[i]){
            cnt++;
        }else if(init!=s[i]){
            v.push_back(cnt);
            cnt=1;
            init=s[i];
            if(s[0]=='0'){
                if(v.size()<(2*k+1)||(v.size()%2)==0){
                    now+=v[v.size()-1];
                    ans = max(ans,now);
                }
                else if(flag == false){
                    now = (now + v[v.size()-1] - v[v.size()-(2*k)-1]);
                    ans = max(ans, now);
                    flag = true;
                } else {
                    now = (now + v[v.size()-1] - v[v.size()-(2*k)]-v[v.size()-(2*k)-1]);
                    ans = max(ans, now);
                }
            }
            
            if(s[0]=='1'){
                if(v.size()<(2*k+2)||(v.size()%2)==1){
                    now+=v[v.size()-1];
                    ans = max(ans,now);
                }
                else{
                    now = (now + v[v.size()-1] - v[v.size()-(2*k)-2]-v[v.size()-(2*k)-1]);
                    ans = max(ans, now);
                }
            }
        }
    }
    print(ans);
    return 0;
}