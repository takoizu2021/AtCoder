#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> v(n);
  rep(i,n) cin>>v[i];
  
  int c;
  rep(i,n) {
    cin>>c;
    v[i] -= c;
  }
  
  int ct=0;
  rep(i,n) {
    if(v[i] > 0) ct += v[i];
  }
  
  cout<<ct<<endl;
}