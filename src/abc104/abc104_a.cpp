#include "bits/stdc++.h"

using namespace std;

#define print(s) cout << (s) << endl;

int main(){
    int r;
	cin >> r;

    if (0 <= r && r < 1200){
        print ("ABC");
    }

    else if (1200 <= r && r < 2800){
        print ("ARC");
    }

    else {
        print ("AGC");
    }
    return 0;
}
