#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v;
	cin>>n>>v;

	int a,ct=0;
	for(int i=0; i<n; i++) {
		cin>>a;
		if(a==v) ct++;
	}

	cout<<ct<<endl;
	return 0;
}