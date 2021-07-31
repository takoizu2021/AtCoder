#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans="Strong";
  set<char> t;
  rep(i,4) t.insert(s[i]);
  if(t.size() == 1) ans="Weak";
  
  int ct=0;
  if(ans != "Weak") {
    rep2(i,1,4) {
      if(s[i-1] == '9') {
        if(s[i] == '0') ct++;
      }
      else if(s[i-1]+1 == s[i]) ct++;
      //cout<<i<<ct<<endl;
    }
  }
  if(ct == 3) ans="Weak";
  
  cout<<ans<<endl;  
}