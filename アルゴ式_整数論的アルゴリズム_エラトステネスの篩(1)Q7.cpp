#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

int main() {
	int ans=0;
	for(int i=1; i<=56; ++i) if(56%i==0) ++ans;
	cout << ans << endl;
	return 0;
}