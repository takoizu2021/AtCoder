#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h1,w1,h2,w2;
  cin>>h1>>w1>>h2>>w2;
  
  string ans = "NO";
  if(h1 == h2 || w1 == w2 ||
     h1 == w2 || w1 == h2   ) ans = "YES";
  cout<<ans<<endl;  
}