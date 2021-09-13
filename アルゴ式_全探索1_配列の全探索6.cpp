#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int mx=-1000;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(mx < a[i]) mx=a[i];
	}
	cout<<mx<<endl;
	return 0;
}