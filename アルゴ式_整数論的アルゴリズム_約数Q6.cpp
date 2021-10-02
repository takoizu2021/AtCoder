#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	long long n;
    cin>>n;

	// √N を整数にキャストする
    // 数値誤差を回避するため、EPS = 10^-9 を足している
	const double eps = 1e-9;
	long long sqr = (long long)(sqrt(n) + eps);
    cout<< sqr <<endl;
	return 0;
}