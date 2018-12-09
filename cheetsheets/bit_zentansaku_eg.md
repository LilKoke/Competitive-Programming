#include "bits/stdc++.h"

using namespace std;

#define sp(x) cout << setprecision(x);
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(a) (a).begin(), (a).end()
#define inf 200000000

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<vector<ll>> f(n), p(n);
	ll in1;
	REP(i, n){
		REP(k, 10){
			cin >> in1;
			f[i].push_back(in1);
		}
	}
	ll in2;
	REP(i, n){
		REP(k, 11){
			cin >> in2;
			p[i].push_back(in2);
		}
	}
    ll ans = -INT64_MAX*0.99;
	for (ll j = 1; j < (2^10); j++){ //joisinoの店のかいへい
        ll temp = 0;
		for (ll i = 0; i < n; ++i){ //ｎこの店
			ll c = 0;
		
			for (ll k = 0; k < 10; ++k){
				if (f[i][k] && (j & (1 << k))) ++c;
				
			}
            temp += p[i][c]; 
		}
        if(temp>ans) ans = temp;
	}
	cout << ans << endl;
	return 0;
}

// bit全探索
