#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  string s1,s2;
  cin>>s1>>s2;
  
  string ans="Yes";
  if((s1[0]==s2[1] && s1[0]=='.') || (s1[1]==s2[0] && s1[1]=='.')) ans = "No";
  cout<<ans<<endl;
}