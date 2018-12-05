 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99

typedef long long ll;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a(6), b(6), c(6);
    REP(i,6) cin>>a[i];
    REP(i,6) cin>>b[i];
    REP(i,6) cin>>c[i];
    int ha = a[3]-a[0];
    int ma = a[4]-a[1];
    int sa = a[5]-a[2];
    if(sa<0){
        sa += 60;
        ma -=1;
    }
    if(ma<0){
        ma += 60;
        ha -= 1;
    }
    int hb = b[3]-b[0];
    int mb = b[4]-b[1];
    int sb = b[5]-b[2];
    if(sb<0){
        sb += 60;
        mb -=1;
    }
    if(mb<0){
        mb += 60;
        hb -= 1;
    }
    int hc = c[3]-c[0];
    int mc = c[4]-c[1];
    int sc = c[5]-c[2];
    if(sc<0){
        sc += 60;
        mc -=1;
    }
    if(mc<0){
        mc += 60;
        hc -= 1;
    }    
    cout<<ha<<" "<<ma<<" "<<sa<<endl;
    cout<<hb<<" "<<mb<<" "<<sb<<endl;
    cout<<hc<<" "<<mc<<" "<<sc<<endl;
    return 0;
}