#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int ct=0;
  while(n >= 0) {
    if(500 <= n) {
      n -= 500;
      ct += 1000;      
    }
    else if(5<=n&&n<500) {
      n -= 5;
      ct += 5;
    }
    else break;
  }
  cout<<ct<<endl;
}