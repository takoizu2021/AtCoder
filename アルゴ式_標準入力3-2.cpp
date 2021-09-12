#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,mul=1;
	for(int i=0; i<n; i++) {
		cin>>a;
		mul *=a;
	}
	cout << mul << endl;
	return 0;
}