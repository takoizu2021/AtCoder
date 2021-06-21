#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll n,b,r;
  cin>>n>>b>>r;
  
  ll ct=0;
  if(n <= b) ct=n;
  else if(n <= b+r) ct=b;
  else {
    ct += n/(b+r)*b;
    if(n%(b+r) <= b) ct += n%(b+r);
    else ct += b;
  }
  cout<<ct<<endl;
}