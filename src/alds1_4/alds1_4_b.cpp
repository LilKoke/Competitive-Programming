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

int binarySearch(int key, int n, vector<int> s){
    int left = 0;
    int right = n;
    while(left<right){
        int mid = (left + right) / 2;
        if(s[mid] == key)
        {
            return 1;
        } else if (key<s[mid])
        {
            right = mid;
        } 
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> s(n);
    REP(i,n) cin>>s[i];
    int q; cin>>q;
    vector<int> t(q);
    REP(i,q) cin>>t[i];
    int ans = 0;
    REP(i,q){
        ans += binarySearch(t[i], n, s);
    }
    print(ans);
    return 0;
}