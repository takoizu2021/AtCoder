#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int x;
	cin>>x;
	vector<int> a(4);
	for(int i=0; i<4; ++i) cin>>a[i];

    vector<int> co {50,10,5,1};

    int res=0;
    for(int i=0; i<4; ++i) {
        int add = x / co[i];

        add = min(add, a[i]);
        res += add;

        x   -= co[i]*add;
        //cout<<x<<" "<<a[i]<<" "<<add<<endl;
    }

    cout<<res<<endl;
	return 0;
}