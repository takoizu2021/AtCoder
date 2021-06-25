#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  int ct = 0;
  if(s[0]==t[0]) ct++;
  if(s[1]==t[1]) ct++;
  if(s[2]==t[2]) ct++;
  
  cout<<ct<<endl;
}