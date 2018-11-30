#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) a.begin(), (a).end()
#define inf = 9876543210
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    //nは自分の年齢N
    cin >> n;
    if (n==1){
        print("Hello World");
    }
    if (n==2){
        int a, b;
        //a,bは足し算をする整数
        cin >> a >> b;
        print(a+b);
    }
}