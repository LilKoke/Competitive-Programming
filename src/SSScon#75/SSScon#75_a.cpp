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
    int a = 0; int b = 0; int c=0;
    REP(i,3){
        if(s[i]=='a') a++;
        else if(s[i]=='b') b++;
        else c++;
    }
    if(a==1 &&b==1&&c==1) print("Yes");
    else print("No");
    return 0;
}