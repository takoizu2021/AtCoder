#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const int inf = 1000000;

bool chk (int x) {
	if(x < 2) return false;
	for(int i=2; i*i<x; ++i) {
		if(x%i==0) return false;		
	}
	return true;
}

int main() {
	int n=53;
	cin>>n;

	n++;
	while(!chk(n)) n++;

	cout << n << endl;
	return 0;
}