#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	int ct=0;
	bool flag=true;
	for(int i=0; i<n; i++) {		
		for(int j=2; j<a[i]; j++) {
			if(a[i]%j==0) flag=false;
		}
		if(a[i]!=1 && flag) ct++;
		flag=true;
	}

	cout<<ct<<endl;	
	return 0;
}