#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<int> a(n);
	int ct=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(i>0 && a[i]>a[i-1]) ct++;
	}
	cout<<ct<<endl;	
	return 0;
}