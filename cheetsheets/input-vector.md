int n;
cin>> n;
//aという配列にはnこの要素がある
vector<int> a(n);

rep(i,n){
    cin >> a[i];
}

または

vector<int> (a);
int in;
rep(i,n){
    cin >> in;
    a.push_back(in); 
}

配列の和
accumulate(all(a),0);