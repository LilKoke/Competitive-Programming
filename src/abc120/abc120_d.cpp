 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;


class UnionFind {
public:
    //親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;
    //つくるときはParentの値をすべて-1にする
    //こうするとすべてバラバラになる
    UnionFind(int N) {
        Parent = vector<int>(N, -1);
    }
    //Aがどのグループに属しているか調べる
    int root(int A) {
        if (Parent[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }
    //自分のいるグループの頂点数を調べる
    int size(int A) {
        return -Parent[root(A)];//親をとってきたい
    }
    //AとBをくっつける
    bool connect(int A, int B){
        //AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
        A = root(A);
        B = root(B);
        if(A == B) {
            //すでにくっついてるからくっつけない
            return false;
        }
        //大きい方（A）に小さいほう（B）をくっつけたい。
        //大小が逆だったらひっくり返しちゃう。
        if(size(A)<size(B)) swap(A,B);

        //Aのサイズを更新する
        Parent[A] += Parent[B];
        //Bの親をAに変更する
        Parent[B] = A;

        return true;
    } 
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;cin>>n>>m;
    vector<int> a(m), b(m);
    REP(i,m){ 
        cin>>a[i]>>b[i];
        a[i]--;
        b[i]--;
    }
    
    vector<long long> ans(m);
    ans[m-1] = (long long)n * (n-1)/2;
    
    UnionFind Uni(n);

    for(int i = m-1; i>=1; i--){
        ans[i-1] = ans[i];

        if(Uni.root(a[i]) != Uni.root(b[i])){
            ans[i - 1] -= (long long)Uni.size(a[i]) * Uni.size(b[i]); 
            Uni.connect(a[i], b[i]);
        }
    }

    REP(i,m){
        cout<<ans[i]<<endl;
    }
    return 0;
}
