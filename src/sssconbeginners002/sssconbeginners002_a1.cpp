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
    lint n;cin>>n;
    stack<pair<string,lint>>st;st.push({"",n});
    while(st.size()){
        string s=st.top().first;
        lint d=st.top().second;
        st.pop();

        if(d==0){ cout<<s<<endl;continue; }
        st.push({s+'c',d-1});
        st.push({s+'b',d-1});
        st.push({s+'a',d-1});
    }
}