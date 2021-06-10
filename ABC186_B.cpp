#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  int hw = h*w;
  vector<int> mas(hw);
  
  rep(i,hw) cin>>mas[i];
  
  int mn = 101;  
  rep(i,hw) mn = min(mn,mas[i]);
  
  int ct = 0;
  rep(i,hw) {
    if(mas[i] > mn) ct += mas[i] - mn;
  }
  
  cout<<ct<<endl;  
}