#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n;
	cin>>n;

	const double eps = 1e-9;
	int sqr = (int)(sqrt(n)+eps);
	cout << n-sqr << endl;
	return 0;
}