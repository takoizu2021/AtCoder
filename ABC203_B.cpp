#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  string room = "000";
  int ct = 0;
  rep2(i,1,n+1) {
    rep2(j,1,k+1) {
      room[0] = i + '0';
      room[2] = j + '0';
      //cout<<room<<endl;
      int rm = stoi(room);
      ct += rm;
    }
  }
  cout<<ct<<endl;
}