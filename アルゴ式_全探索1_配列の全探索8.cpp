#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int mn=1000;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(mn > a[i]) mn=a[i];
	}
	cout<<mn<<endl;
	return 0;
}