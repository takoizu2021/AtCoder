#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int yy = stoi(s.substr(0,2));
  int mm = stoi(s.substr(2,2));
  
  string ans = "NA";
  if(1<=yy && yy<=12 && 1<=mm && mm<=12) ans = "AMBIGUOUS";
  else if(1<=mm && mm<=12) ans = "YYMM";
  else if(1<=yy && yy<=12) ans = "MMYY";
  
  cout<<ans<<endl;
}