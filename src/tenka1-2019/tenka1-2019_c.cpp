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
    string s;
    int n,ans1 = 0,ans2 = 0;
    cin >> n >> s;
    string s1,s2;
    s1 = s;
    s2 = s;
    //shironisuru
    for(int i = n;i>0;i--) {
        if(s1[i] == '.' && s1[i-1] == '#') {
        ans1++;
        s1[i-1] = '.';
        }
    }
    //kuroni
    for(int i = 0;i < n-1;i++) {
        if(s2[i] == '#' && s2[i+1] == '.') {
        ans2++;
        s2[i+1] = '#';
        }
    }
    cout << min(ans1,ans2);
    return 0;
}