i番目の人の得点がaiのとき、
1位～n+1位の人の番号を出力
int n; cin>>n;
vector<pair<int, int>>p(n);
rep(i, n){
    cin>> p[i].first;                           //(first, second)
    p[i].second = i+1;
}

sort(all(p),gre(pair<int, int>));

rep(i,n){
    print(p[i].second);
}