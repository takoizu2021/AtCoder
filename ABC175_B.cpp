#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<ll> l(n);
  rep(i,n) cin>>l[i];
  
  sort(l.begin(),l.end());  
  int ct=0;
  rep(i,n) {
    if(n<=2) break;
    rep2(j,i+1,n) {
      rep2(k,j+1,n) {
        if(l[i] != l[j] && l[j] != l[k] && l[i] != l[k]) {
          if(l[i] < l[j]+l[k] && l[j] < l[i]+l[k] && l[k] < l[i]+l[j]) {
            //cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
            ct++;
          }
        }
      }      
    }
  }
  cout<<ct<<endl;
}