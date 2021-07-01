#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<int> v(m+1);
  int k,l;
  rep(i,n) {
    cin>>k;
    rep(i,k) {
      cin>>l;
      v[l]++;
    }
  }
  
  int ct = 0;
  rep(i,m+1) if(v[i] == n) ct++;
  
  cout<<ct<<endl;
}