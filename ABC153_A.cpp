#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,a;
  cin>>h>>a;
  
  int ct = 0;
  while(h > 0) {
    h -= a;
    ct++;
  }
  cout<<ct<<endl;
}