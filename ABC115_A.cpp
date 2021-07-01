#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int d;
  cin>>d;
  
  string ans = "Christmas";
  if(d == 24) ans = "Christmas Eve";
  else if(d == 23) ans = "Christmas Eve Eve";
  else if(d == 22) ans = "Christmas Eve Eve Eve";
  
  cout<<ans<<endl;
}