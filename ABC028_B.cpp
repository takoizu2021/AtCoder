#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  vector<int> ct(6);
  rep(i,s.size()) {
    ct[s[i]-'A']++;
  }
  
  rep(i,6) {
    cout<<ct[i];
    if(0<= i && i<=4)cout<<" ";
    if(i == 5) cout<<endl;
  }
}