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
    string s, t; cin>>s>>t;
    int a, b;
    vector<int> ans;
    int count = 0;
    if(t.size()>=s.size()) swap(s,t);
    REP(i,t.size()-1){
        s = ' ' + s;
        s = s + ' ';
    }
    ans.push_back(0);
    a = s.size()-t.size()+1;
    b = t.size();
    REP(i,a){
        REP(j,b+1){ 
            if(s[i+j] == t[j]){
                count++;
            } else if(count!=0 && s[i+j] != t[j]){
                ans.push_back(count);
                count = 0;
            } else continue;
        }
        count = 0;
    }
    sort(all(ans), greater<int>());
    cout<<ans[0]<<endl;
    return 0;
    }