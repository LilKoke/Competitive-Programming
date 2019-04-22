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
    int n, k; cin>>n>>k;
    int a = 1;
    int b = 1;
    while(1){
        b*=2;
        if(k<(b*2-b)){
            a*=2;
            n--;
            break;
        }
        else{
            a*=2;
            n--;
        }
    }
    a+=(n*k);
    print(a);
    return 0;
}