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
    int n; cin>>n;
    vector<string> t(n), h(n);
    int anst = 0;
    int ansh = 0;
    REP(i,n) cin>>t[i]>>h[i];
    REP(i,n){
        int m = min(t[i].length(),h[i].length());
        if (t[i] == h[i]) {
                anst++;
                ansh++;
        }
        else{
            REP(j,m+1){
                char cht = t[i][j];
                char chh = h[i][j];
                if(cht > chh){
                    anst +=3;
                    break;
                } else if(cht<chh){
                    ansh +=3;
                    break;
                } else if (j == m) {
                    if(t[i].length()<h[i].length()) ansh+=3;
                    else if(t[i].length()>h[i].length())anst +=3;
                    break; 
                } else continue;
            }
        }
    }
    cout<<anst<<" "<<ansh<<endl;
    return 0;
}