#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  s += s.substr(0,1);
  s =  s.substr(1,3);
  cout<<s<<endl;
}