#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s1,s2,s3,s4;
  cin>>s1>>s2>>s3>>s4;
  
  set<string> s;
  s.insert(s1);
  s.insert(s2);
  s.insert(s3);
  s.insert(s4);
  
  string ans="No";
  if(s.size() == 4) ans="Yes";
  
  cout<<ans<<endl;
}