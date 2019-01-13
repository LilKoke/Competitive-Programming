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
    while(1){
        int m, f, r;
        cin>>m>>f>>r;
        if(m==-1 && f==-1 && r==-1) break;
        else if(m==-1 || f==-1) print('F');
        else {
            if (m+f >= 80) print('A');
            else if (m+f >= 65 && m+f < 80) print('B');
            else if (m+f >= 50 && m+f < 65) print('C');
            else if (m+f >= 30 && m+f < 50) {
                if (r >= 50) print('C');
                else print('D');
            }
            else print('F');
        }

    }
    return 0;
}