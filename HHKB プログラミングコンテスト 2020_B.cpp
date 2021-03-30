#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  vector<char> vec(w);
  vector<vector<char> > s(h,vec);
  
  rep(i,h) {
    rep(j,w) {
      cin>>s[i][j];
    }
  }
  
  int ct=0;
  rep(i,h) {
    rep(j,w) {
      if(j+1 != w) { 
        if(s[i][j] == '.'&& s[i][j+1] == '.') ct++;
      }
      if(i+1 != h) {
        if(s[i][j] == '.'&& s[i+1][j] == '.') ct++;
      }
    }
  }
  cout<<ct<<endl;
}