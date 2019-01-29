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

int s, a, ans;
int i = 0;
vector<int> v;
bool flag = false;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>s;
    while(1){
        if(i == 0) {
            a = s;
            v.push_back(a);
            i++;
        }
        else{
            if(a%2 == 0) a = a/2;
            else a = 3*a + 1;
            v.push_back(a);
            for(int j = i-1; j>=0; j--){
                if(v[j] == v[i]){
                    ans = i + 1;
                    flag = true;
                }
                else continue;
            }
            i++;
        }
        if(flag == true) break;
    }
    print(ans);
    return 0;
}