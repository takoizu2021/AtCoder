#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n;
	cin>>n;

	int res=0;
	while(n) {
		++res;
		if(n%3==0) n /= 3;
		else --n;
	}
	cout << res << endl;
	return 0;
}