#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int s,w;
  cin>>s>>w;
  
  string ans = "safe";
  if(s <= w) ans = "unsafe";
  cout<<ans<<endl;
}