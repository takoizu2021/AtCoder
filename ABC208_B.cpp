#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int p;
  cin>>p;
  
  vector<int> n{0,1};
  
  int i=1;
  while(n[n.size()-1] < 10000000) {
    n.push_back(n[i] * (i+1));
    i++;
    //cout<<n[i]<<endl;
  }
  
  int ct=0;
  while(p > 0) {
    rep2(j,1,n.size() ) {
      if(p>0&&p < n[j]) {        
        p -= n[j-1];
        //cout<<j<<" "<<n[j-1]<<" "<<p<<endl;
        ct++;
        j=1;        
      }
    }
  }
  cout<<ct<<endl;
}