#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int n,d;
  cin>>n>>d;
  
  ll x,y;
  int ct=0;
  rep(i,n) {
    cin>>x>>y;
    double z = sqrt((x*x)+(y*y));
    if(d >= z) ct++;
  }
  cout<<ct<<endl;
}