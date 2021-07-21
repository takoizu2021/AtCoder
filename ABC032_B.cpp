#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s; int k;
  cin>>s>>k;
  
  set<string> sk;
  
  int n=s.size();
  for(int i=0; i<=n-k; i++) {
    string ct = s.substr(i,k);
    //cout<<ct<<endl;
    sk.insert(ct);
  }
  int ans=sk.size();
  cout<<ans<<endl;
}