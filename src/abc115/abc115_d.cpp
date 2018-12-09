 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl

typedef pair<int, int> P;
typedef long long ll;

template <int N>
int a(){
	return 10000 + a<N-1>() * 1000 + 1 * 100 + a<N-1>() * 10 + 0;
}

template <>
int a<0>(){
	return 1;
}

namespace std {
  template <class BidirectionalIterator>
  void reverse(BidirectionalIterator first, BidirectionalIterator last);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x; cin>>n>>x;
    int burger = a<n>;
    burger = to_string(burger);
    burger.substr(n-x-1,x);
    int ans = burger.find("1") 
    cout<<ans<<endl;
    return 0;
}