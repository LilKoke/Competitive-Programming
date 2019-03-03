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
int gcd(int x, int y){
    int r;
    while(y>0){
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, k;
    cin>>a>>b>>k;
    int n = gcd(a,b);
    vector<int> l(100);
    REP(i,100) l[i] = -inf;
    int j = 0;
	for(int i=1; i<=sqrt(n);i++){
        if(n%i == 0){
			l[j] = i;
            j++;
            if(i!=sqrt(n)){
                l[j] = n/i;
                j++;
            }
		}
	}
   
    sort(all(l), greater<int>()); 
    print(l[k-1]);
    return 0;
}