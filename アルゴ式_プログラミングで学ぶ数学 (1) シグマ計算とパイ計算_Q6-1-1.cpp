#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int func(int x) {
    if(x==0) return 0;
   
    return func(x-1) + x;
}

int main() {
    int n;
    cin>>n;

    int ans = func(n);

	cout << ans << endl;
	return 0;
}