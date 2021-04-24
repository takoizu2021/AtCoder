#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  int w;
  cin>>s>>w;
  for(int i=0;i<s.size();i++) {
    if(i == 0 | i % w == 0) {
      cout<<s[i];
    }
  }
  cout<<endl;
}