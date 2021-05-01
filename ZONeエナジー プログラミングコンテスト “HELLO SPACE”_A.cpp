#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int ct = 0;
  rep(i,12) {
    if(s[i] == 'Z' && s[i+1] == 'O' && s[i+2] == 'N' && s[i+3] == 'e') ct++;
  }
  cout<<ct<<endl;
}