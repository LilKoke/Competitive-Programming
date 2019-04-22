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
    int h, w; cin>>h>>w;
    vector<vector<char> > a(h);
    REP(i,h){
        REP(j,w){
            char in;
            cin>>in;
            a[i].push_back(in);
        }
    }
    string ans = "Possible";
    
    int x = 0;
    int y = 0;
    
    while(1){
        if(a[y+1][x] == '#'&&a[y][x+1] == '#'){
            ans = "Impossible";
            break;
        } else if(a[y+1][x] == '#'){
            y++;
        } else if(a[y][x+1] == '#'){
            x++;
        } else {
            ans = "Impossible";
            break;
        }
        if(x==(w-1)&&y==(h-1)) break;
    }
    print(ans);
    return 0;
}