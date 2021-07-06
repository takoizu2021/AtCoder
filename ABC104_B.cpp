#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans = "WA";
  bool chk = false;
  int a = s.size();
  int ct=0, x=0;
  
  if(s[0] == 'A') {
    for(int i=2;i<a-1;i++) {
      if(s[i] == 'C') ct++;
    }
      //cout<<ct<<endl;
    if(ct == 1) {
      for(int i=1; i<a; i++) {
        if('a'<=s[i] && s[i]<='z') x++;
      }
      chk = true;
    }
  }
  if(chk == true && x+2 == a) ans = "AC";
  cout<<ans<<endl;
}