#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s,t;
	cin>>n>>s>>t;

	int ct=0;
	for(int i=0; i<n; i++) {
		if(s[i] != t[i]) ct++;
	}
	cout<<ct<<endl;
	return 0;
}