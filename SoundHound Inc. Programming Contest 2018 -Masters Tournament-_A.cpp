#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  if     (a+b == 15) cout<<"+"<<endl;
  else if(a*b == 15) cout<<"*"<<endl;
  else   cout<<"x"<<endl;
}