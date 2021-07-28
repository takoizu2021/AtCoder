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
  
  vector<char> sc(1);
  vector<int> sm(1);
  int ct=0;
  rep(i,s.size()) {
    if(s[i] != sc[ct]) {
      sc.push_back(s[i]);
      sm.push_back(1);
      ct++;
    }
    else sm[ct]++;
  }
  
  //out
  rep2(i,1,sc.size()) {
    cout<<sc[i]<<sm[i];
  }
  cout<<endl;
}