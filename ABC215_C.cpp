#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s;
  int k;
  cin>>s>>k;
  
  sort(s.begin(),s.end());
  
  rep(i,k-1) next_permutation(s.begin(),s.end());
  
  cout<<s<<endl;
}