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
    int n, y; cin>>n>>y;
    lint money = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while(1){
        if(money+10000>y) break;
        money += 10000;
        a++;
        n--;
        if(n==0) break;
    }
    while(1){
        if(money+5000>y) break;
        if(n==0) break;
        money += 5000;
        b++;
        n--;
    }
    while(money<y){
        if(money+1000>y) break;
        if(n==0) break;
        money += 1000;
        b++;
        n--;
    }
    
    if(money < y){a=-1;b=-1;c=-1;}
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}