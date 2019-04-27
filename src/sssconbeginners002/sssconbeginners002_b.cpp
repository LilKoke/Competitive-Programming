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
 
struct cont{//queueに入れるもの(content)の型を作る(pairで入れ子にすると見にくいため)
	lint c,x,y;//c:そこまでの距離、(x,y):座標
};

int main(){
	lint h,w,sx,sy,gx,gy;cin>>h>>w>>sy>>sx>>gy>>gx;
	--sy,--sx,--gy,--gx;//0-indexed化
	vector<string> s(h);//マス
	REP(i,h){
		cin>>s[i];
	}//ここまで入力
	int dir[5]={0,1,0,-1,0};//4方向を見るのに使う、少しトリッキーだが多分見ればわかる

	queue<cont>q;q.push({0,sx,sy});//このキューにつまれているものはcont, つまりcとxとyのセット
	//最初の座標と、そこまでの距離が0が開始
	while(q.size()){//qに何か物が入っている間
		lint c=q.front().c, //解決しました
			x=q.front().x,
			y=q.front().y;
		q.pop();			//上に積まれているものを変数に移動する
							//（そのままでもいいけど個人的にはこっちのほうがわかりやすい）
		if(s[y][x]=='P')continue;//もう通ったところ(P)はすぐ次のcontに行く


		s[y][x]='P';//通ったのでマスのその位置をPにする
		if(x==gx&&y==gy){ cout<<c<<endl;return 0; }//ゴールだったらそこの距離を出力し終了
		
		REP(i,4){//4方向に、「もしそこがまだ通ってない(=='.')だったらそこをtodo(see)キューに入れる」をする
			//dirの中身(0,1,0,-1,0)をみると、隣り合う2項を見ればうまく4方向が作れることがわかる
			//(0,1),(1,0),(0,-1),(-1,0)って感じで

			if(s[y+dir[i+1]][x+dir[i]]=='.'){//上下左右の今見てるマスが'.'だったら
				q.push({c+1,x+dir[i],y+dir[i+1]});//そのマスを次みると覚えとく(距離は+1)
			}
		}
	}//合ってるかわからんので1回動かしてみてほしい 
}