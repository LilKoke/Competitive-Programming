#include "bits/stdc++.h"

using namespace std;

#define sp(x) cout << setprecision(x);
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX * 0.99
#define print(s) cout<<(s)<<endl;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> v(28);
	
	vector<bool> b(30);//b[i]: 人iが提出したかどうか
	REP(i,28) {
		cin >> v[i];--v[i];//0-indexedに変換
	}
	REP(i,28){
		b[v[i]]=1;//提出した人をマーク
	}
	REP(i,30){
		if(b[i]==0){
			print(i+1);//1-indexedに変換
		}
	}

	return 0;
    
    /*
	REP(i, 27){
		if (v[0] == 1 && v[i] + 1 != v[i + 1])
		{ //1番の人が忘れず、1以外の番号の連続しない二人が忘れた場合
			int ans = v[i] + 1;
			cout << ans << endl;
		}
		else if (v[0] == 2 && v[i] + 1 != v[i + 1])
		{ //1番の人が忘れて、２以外の一人が忘れた場合
			int ans = v[i] + 1;
			cout << 1 << endl;
			cout << ans << endl;
		}
		else if (i<=26 && v[i] < 29 && v[i] + 1 != v[i + 1] && v[i] + 2 != v[i + 2])
		{ //
			int ans1 = v[i] + 1;
			int ans2 = v[i] + 2;
			cout << ans1 << endl;
			cout << ans2 << endl;
		}
	}
	if (v[0] == 3)
	{
		int ans1 = 1;
		int ans2 = 2;
		cout << ans1 << endl;
		cout << ans2 << endl;
	}
	else if (v[27] == 28)
	{
		int ans1 = 29;
		int ans2 = 30;
		cout << ans1 << endl;
		cout << ans2 << endl;

		return 0;
	}
    */
}