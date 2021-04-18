#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  string a,b,c;
  cin>>n>>a>>b>>c;
  
  int ct=0;
  rep(i,n) {
    rep(j,n) {
      rep(k,n) {
        if(a[i] == b[i]) {
          if(a[i] != c[i]) {
            c[i] = a[i];
            ct++;
          }          
        }
        else if(b[i] == c[i]) {
          a[i] = b[i];
          ct++;
        }
        else {
          b[i] = a[i];
          ct++;
        }
      }
    }
  }
  cout<<ct<<endl;
}