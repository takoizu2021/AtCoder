#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int x;
  string y;
  cin>>x>>y;
      
  if('0'<=y[1]&&y[1]<='2') cout<<x<<"-"<<endl;
  else if('3'<=y[1]&&y[1]<='6') cout<<x<<endl;
  else cout<<x<<"+"<<endl;
}