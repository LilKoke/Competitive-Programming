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

	//1 << 32 をintでやっちゃだめlong long でやりましょう
	//あとlong long に代入するときは(1LL) をかけるのもおすすめ
	//j: 0b0000000101 だとしたら、時間帯0と2に空いている
	// dight9876543210
	// 1 =0b0000000001
	//2^10 - 1 =0b1111111111 右からkbit目は時間帯kにおいてjoisinoお姉さんの店が空いているかどうかを表している
	//  1<<k =0b1000000000 (k = 9)
    ll ans = -INT64_MAX*0.99;
	for (ll j = 1; j < 1024 /* = (2^10)*/; j++){ //joisinoの店のかいへい
        ll temp = 0;
		for (ll i = 0; i < n; ++i){ //ｎこの店
			ll c = 0;
			/*
            // 店iとjoisinoお姉さんの開く店の両方が営業している時間帯の個数をciとする
            
			//時間帯ｋにおいてjoisinoお姉さんの店が空いている=> j(2)の右からk桁目で１
            // j:=時間帯kにおいてjoisinoお姉さんの店が空いているかどうかを表している
            //     9876543210
            // j:= 1010101011
            // AND 0000100000 = 1<<k
            //     0000100000
            */
           // 
           // p[i][c] := ???
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
