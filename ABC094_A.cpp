#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,x;
  cin>>a>>b>>x;
  
  string ans = "NO";
  if(x <= a+b && a <= x) ans = "YES";
  cout<<ans<<endl;
}