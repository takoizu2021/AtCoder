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
  rep(i,n) cin>>a[i];
  
  int ct=0;
  rep(i,n) {
    if(a[i] <= 10) continue;
    else ct += a[i] - 10;
  }
  cout<<ct<<endl;
}