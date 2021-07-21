#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  
  double taka = b/a;
  double aoki = d/c;
  
  //cout<<taka<<" "<<aoki<<endl;
  string ans = "DRAW";
  if(taka > aoki) ans = "TAKAHASHI";
  if(taka < aoki) ans = "AOKI";
  
  cout<<ans<<endl;
}