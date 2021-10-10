#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {  
  vector<string> s {"ABC" , "ARC" , "AGC" , "AHC"};
  vector<bool> c (4,true);
  
  string t;
  for(int i=0; i<4; ++i) {
    cin>>t;
    for(int j=0; j<4; ++j) if(t == s[j]) c[j]=false;    
  }
  for(int j=0; j<4; ++j) if(c[j]) cout<<s[j]<<endl;
}