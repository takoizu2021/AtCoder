#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int f(int x) {
	int sum=0;
	if(x==0) return 0;
	else {
		return f(x-1)+x;
	}
	
}
int main() {
	int n;
	cin>>n;

	int ans = f(n);

	cout << ans << endl;
	return 0;
}