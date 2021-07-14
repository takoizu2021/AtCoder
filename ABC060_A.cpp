#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string a,b,c;
  cin>>a>>b>>c;
  
  string ans="NO";
  if(a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) ans="YES";
  
  cout<<ans<<endl;
}