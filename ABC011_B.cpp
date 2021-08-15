#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int n=s.size();
  rep(i,n) {
    if(i==0) {
      if('a'<=s[i]&&s[i]<='z') s[i] -= 32;
    }
    else if('A'<=s[i]&&s[i]<='Z') s[i] += 32;
  }
  
  cout<<s<<endl;
}