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
  string s;
  int a,b;  
  cin>>s>>a>>b;
  
  --a; --b;
  
  char c = s[a];
  s[a] = s[b];
  s[b] = c;

  cout<<s<<endl;
  
}