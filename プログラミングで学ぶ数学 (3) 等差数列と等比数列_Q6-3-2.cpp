#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int d = (y-x) / (b-a);
    int ans = x - a*d;
	cout << ans << endl;
	return 0;
}