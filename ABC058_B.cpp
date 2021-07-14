#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string o,e;
  cin>>o>>e;
  
  int os=o.size(),es=e.size();
  
  for(int i=0; i<min(os,es); i++) {
    cout<<o[i]<<e[i];
  }
  if(os < es) cout<<e[es-1];
  else if(os > es) cout<<o[os-1];
  cout<<endl;
}