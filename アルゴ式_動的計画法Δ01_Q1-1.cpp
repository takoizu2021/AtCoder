#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	int ans = x;
	for(int i=1; i<n; ++i) {
		if(i == 1) ans = y;
		else {
			ans = (x+y)%100;
			x = y;
			y = ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}