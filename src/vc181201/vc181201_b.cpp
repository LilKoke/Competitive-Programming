#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;
#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n) 
#define all(a) (a).begin(), (a).end()
#define inf 10000000
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<pair<int,int>>a(n);
    vector<int> b(m);

    REP(i,n) cin>>a[i].second;
    REP(i,m) cin>>b[i];

    REP(i,m){
        REP(j,n){
            if (a[j].second <= b[i]){
                a[j].first++;
                break;
            }
        }
    }

	//a[i].firstが最大のところの番号を求める
	int ans, cmax=-inf;//max: 今まで見てきた中で最大のa[i].firstの値
	REP(i,n){
		if(cmax<a[i].first){
			cmax=a[i].first;
			ans=i+1;
		}
	}
    print(ans);
    return 0;
}

