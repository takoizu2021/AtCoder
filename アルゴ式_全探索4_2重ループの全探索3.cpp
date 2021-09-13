#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin>>l>>r;

	int ct=0;
    bool flag=true;
	for(int i=l; i<=r; i++) {
		string x= to_string(i);
        int n=x.size();
        for(int j=0; j<n; j++) {
            if(x[j] != x[n-1-j]) flag = false;
        }
        if(flag) ct++;
        flag = true;
	}

    cout<<ct<<endl;	
	return 0;
}