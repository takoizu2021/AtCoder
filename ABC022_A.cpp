#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,s,t,w;
  cin>>n>>s>>t>>w;
  
  int ct=0, a=0;
  if(s<=w&&w<=t) ct++;
  rep(i,n-1) {    
    cin>>a;
    w += a;
    if(s<=w&&w<=t) ct++;
  }
  cout<<ct<<endl;
}