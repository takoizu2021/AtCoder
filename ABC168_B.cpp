#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int k;
  string s;
  cin>>k>>s;
  
  int size = s.size();
  string ans = s;
  if(size > k) {
    ans = s.substr(0,k) + "...";
  }
  cout<<ans<<endl;
}