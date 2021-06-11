#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  ll a,b;
  ll ct = 0;
  rep(i,n) {
    cin>>a>>b;    
    ct += (a+b)*(b-a+1)/2;
    //cout<<(a+b)*(b-a+1)/2<<endl;
  }
  cout<<ct<<endl;
}