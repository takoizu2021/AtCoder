#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  int ct = 1;
  int mx = 1000000001;
  int lim = k;
  for(int i=0;lim<=mx;i++) {
    if(n < lim) break;
    else {
      ct++;
      lim *= k;
      //cout<<lim<<endl;
    }
  }  
  cout<<ct<<endl;
}