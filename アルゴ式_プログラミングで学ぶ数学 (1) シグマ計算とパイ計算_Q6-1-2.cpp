#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int l,r;
	cin>>l>>r;

	int ans=0;
	for(int i=l; i<=r; i++) {
		ans += (2*i-1) * (2*i-1);
		//cout<<(2*i-1) * (2*i-1)<<endl;
	}
	cout << ans << endl;
	return 0;
}