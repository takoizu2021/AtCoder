#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string sr = s;
  reverse(sr.begin(),sr.end());
    //cout<<sr<<endl;
  int ct=0;
  rep(i,s.size()) {
    if(s[i] != sr[i]) ct++;
  }
  ct /= 2;
  cout<<ct<<endl;
}