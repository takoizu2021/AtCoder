#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const int inf = 1000000;

int main() {
	int ans=0;
	for(int i=1; i<=56; ++i) if(56%i==0) ++ans;
	cout << ans << endl;
	return 0;
}