#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//ç≈ëÂåˆñÒêî gcd(A,B)

int main() {
  int n;
  cin>>n;
  vector<string> s(n);
  rep(i,n) cin>>s[i];
  
  int ct = 0;
  string ans = "No";
  //â°
  rep(i,n) rep(j,n-5) {
    rep2(k,j,j+6) if(s[i][k]=='#') ct++;
    //cout<<"i"<<i<<":"<<"j"<<j<<"|";
    //cout<<ct<<"|";
    if(ct>=4) ans = "Yes";
    ct = 0;
  }
  //èc
  rep(i,n-5) rep(j,n) {
    rep2(k,i,i+6) if(s[k][j]=='#') ct++;
    //cout<<"i"<<i<<":"<<"j"<<j<<"|";
    //cout<<ct<<"|";
    if(ct>=4) ans = "Yes";
    ct = 0;
  }
  //ÉJÉh
  int ct1,ct2;
  ct1=ct2=0;
  rep(i,n-5)rep(j,n-5) {
    rep(k,6) {
      if(s[i+k][j+k]=='#') ct1++;//ç∂è„
      if(s[i+5-k][j+k]=='#') ct2++;//âEè„
    }
    if(ct1>=4||ct2>=4) ans = "Yes";
    ct1 = ct2 = 0;
  }
  cout<<ans<<endl;
}