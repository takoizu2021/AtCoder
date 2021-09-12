#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,mn=10001;
	for(int i=0; i<n; i++) {
		cin>>a;
		if(mn > a) mn=a;
	}
	cout << mn << endl;
	return 0;
}