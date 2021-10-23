#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> x(n),y(n);
  rep(i,n) cin>>x[i]>>y[i];
  
  int ct=0;
  rep(i,n) rep(j,i) rep(k,j) {
    ll xa = x[j]-x[i];
    ll ya = y[j]-y[i];
    ll xb = x[k]-x[i];
    ll yb = y[k]-y[i];
    if(xa*yb != xb*ya) ++ct;
  }
  cout<<ct<<endl;
}