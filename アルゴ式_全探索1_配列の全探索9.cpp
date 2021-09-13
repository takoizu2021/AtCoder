#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int a;
	vector<int> ct(10);
	for(int i=0; i<n; i++) {
		cin>>a;
		ct[a]++;
	}
	for(int i=1; i<=9; i++) {
		cout<<ct[i]<<endl;
	}
	return 0;
}