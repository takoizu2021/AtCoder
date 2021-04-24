#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> a(n);
  vector<int> b(n);
  
  int maxab=   0;
  int minab=1001;
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  rep(i,n) {
    maxab = max(max(maxab,a[i]),b[i]);
    minab = min(min(minab,a[i]),b[i]);
  }
  
  int ct = 0;
  rep2(i,minab,maxab+1) {
    bool check = 1;
    rep(j,n) {
      //cout<<a[j]<<" "<<i<<" "<<b[j]<<endl;
      if(a[j]<=i && i<=b[j]);
      else {
        check = 0;
        break;
      }
    }
    if(check) ct++;
  }
  cout<<ct<<endl;
}