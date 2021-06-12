#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin>>n;
  
  vector<double> x(n);
  vector<double> y(n);
  rep(i,n) cin>>x[i]>>y[i];
  
  double slash = 0;
  int ct = 0;
  rep(i,n) {
    rep2(j,i+1,n) {
      slash = (y[j]-y[i])/(x[j]-x[i]);
      //cout<<i<<" "<<j<<" "<<slash<<endl;
      if(-1 <= slash && slash <= 1) ct++;
      //cout<<"ct"<<ct<<" ";
    }
  }
  cout<<ct<<endl;  
}  