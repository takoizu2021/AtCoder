#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  int tol=0, ct=0;
  rep(i,n) {
    cin>>tol;
    if(tol >= k) ct++;
  }
  cout<<ct<<endl;
}