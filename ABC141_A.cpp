#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans;
  if(s == "Sunny") ans = "Cloudy";
  if(s == "Cloudy") ans = "Rainy";
  if(s == "Rainy") ans = "Sunny";
  
  cout<<ans<<endl;
}