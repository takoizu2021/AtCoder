#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;

	int sum=0;
	if(n>=sum) {
		sum += n/5;
		n -= n/5*5;
	}
	sum += n;
	cout << sum << endl;
	return 0;
}