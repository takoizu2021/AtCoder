#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n,k;
  cin>>n>>k;
  int ct=0;
  vector<int> a(n);
  vector<int> b(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  rep(i,n) {
    ct += abs(a[i]-b[i]);
  }
  //cout<<ct<<endl;
  if(k>=ct&&(k-ct)%2==0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}