#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  string s;
  cin>>n>>s;
  
  int ct = 0;
  string chk = "ABC";
  rep(i,n-2) {
    string abc = s.substr(i,3);
      //cout<<abc<<endl;
    if(chk == abc) ct++;
  }
  cout<<ct<<endl;
}