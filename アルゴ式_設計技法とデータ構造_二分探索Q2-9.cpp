#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

//f(x)を求める関数
int f (double x, vector<double> L) { //xは長さ
	double ans = 0;
	for(double i: L) {
		ans += (int)(i/x);
	}
	return ans;
}

int main() {
	int n,k;
	cin>>n>>k;

	vector<double> L(n);
	rep(i,n) cin>>L[i];

	double left=0, right=2e5;
	while(right-left > 1e-6) {
		double mid = (left+right) / 2;
		if(f(mid,L) >= k) { // もし f(mid,L)>=K ならば答えは mid 以上 right 以下
			left=mid;				
		}
		else { // そうでなければ答えは left 以上 mid 未満
			right=mid;
		}
	}

  // 答えは left 以上 right 以下であることがわかっている。
  // 精度は十分なので、ここでは left の値を出力する。*/
	double ans = left;
	cout<<setprecision(10)<<left<<endl;
	return 0;
}