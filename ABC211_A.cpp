#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  double a,b;
  cin>>a>>b;
  
  double c = (a-b)/3 + b;
  
  cout << fixed << setprecision(10);
  cout<<c<<endl;
}