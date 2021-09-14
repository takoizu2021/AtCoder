#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    int ct=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i] > b[j]) ct++;
        }
    }

    cout<<ct<<endl;
	return 0;
}