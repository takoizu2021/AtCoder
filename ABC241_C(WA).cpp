#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//�ő���� gcd(A,B)

int main() {
  int n;
  cin>>n;
  vector<string> s(n);
  rep(i,n) cin>>s[i];
  
  int ct = 0;
  string ans = "No";
  //��
  rep(i,n) rep(j,n-5) {
    rep2(k,j,j+6) if(s[i][k]=='#') ct++;
    //cout<<"i"<<i<<":"<<"j"<<j<<"|";
    //cout<<ct<<"|";
    if(ct>=4) ans = "Yes";
    ct = 0;
  }
  //�c
  rep(i,n-5) rep(j,n) {
    rep2(k,i,i+6) if(s[k][j]=='#') ct++;
    //cout<<"i"<<i<<":"<<"j"<<j<<"|";
    //cout<<ct<<"|";
    if(ct>=4) ans = "Yes";
    ct = 0;
  }
  
  //�J�h
  int ct1,ct2,ct3,ct4;
  ct1=ct2=ct3=ct4=0;
  for(int i=0; i<6; ++i) {
    if(s[i][i]=='#') ct1++;//����
    if(s[n-1-i][i]=='#') ct2++;//����
    if(s[i][n-1-i]=='#') ct3++;//�E��
    if(s[n-1-i][n-1-i]=='#') ct4++;//�E��
  }
  if(ct1>=4||ct2>=4||ct3>=4||ct4>=4) ans = "Yes";   
  
  cout<<ans<<endl;
}