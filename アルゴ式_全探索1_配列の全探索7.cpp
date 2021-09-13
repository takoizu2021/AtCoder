#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int ct=0, mx=-1;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(mx < a[i]) {
			mx=a[i];
			ct=i;
		}
	}
	cout<<ct<<endl;
	return 0;
}