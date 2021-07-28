#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string a,b;
  cin>>a>>b;
  
  string ab=a+b;
  int c=stoi(ab);
  int ans=c*2;
  
  cout<<ans<<endl;
}