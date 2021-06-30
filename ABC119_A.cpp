#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string y = s.substr(0,4);
  string m = s.substr(5,2);
  string d = s.substr(8,2);
  string ymd =  y+m+d;
  int hei = stoi(ymd);
  
  string ans = "TBD";
  if(hei <= 20190430) ans = "Heisei";
  
  cout<<ans<<endl;
}