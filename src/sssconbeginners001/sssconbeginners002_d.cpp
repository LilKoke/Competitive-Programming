 #include "bits/stdc++.h"
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
    int n; cin>>n;
    vector<string> s(n);
    for(int i = 0; i<n; i++) cin>>s[i];
    int m; cin>>m;
    vector<string> t(m);
    for(int i = 0; i<n; i++) cin>>t[i];

    vector<vector<int> > a(3);
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int in; cin>>in;
            a[i].push_back(in);
        }
    }

    


    return 0;
}