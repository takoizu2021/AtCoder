#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  vector<char> a(26);

  string ans = "yes";
  rep(i,s.size()) {
    int sa = s[i] - 'a';
    a[sa]++;
    if(a[sa] >= 2)  {
      ans = "no";
      break;
    }
  }
  cout<<ans<<endl;
}