#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  string ans = "No";
  if(1*a<=b && b<=6*a) ans = "Yes";
  
  cout<<ans<<endl;
}