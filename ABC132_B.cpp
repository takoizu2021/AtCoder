#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> p(n);
  rep(i,n) cin>>p[i];
  
  int ct=0;
  for(int i=1; i<n-1; i++) {
    set<int> s;
    s.insert(p[i-1]);
    s.insert(p[i]);
    s.insert(p[i+1]);
    
    s.erase(*begin(s));
    if(*begin(s) == p[i]) ct++;
  }
  cout<<ct<<endl;
}