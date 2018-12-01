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

	while(1){
		string init; cin>>init;
		if(init=="-")break;

		int m; cin>>m;
		vector<int> h(m);
		//string ans;
		REP(i,m){
			cin>>h[i];
			string removed = init.substr(0,h[i]);		//0番目の文字からh[i]文字取る 0,1,2, ..., h[i-1]
			int length = init.size();				
			string left = init.substr(h[i],length-h[i]);//leftにinitのひだりからh[i]文字以外を入れる
			//init.insert(length,removed);//init の後ろにremovedを付けてる
			init = left+removed;
		}
		print(init);
	}

return 0;
}