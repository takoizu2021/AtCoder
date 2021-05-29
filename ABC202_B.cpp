#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  reverse(s.begin(),s.end());
  
  rep(i,s.size() ) {
    if(s[i] == '6') s[i] = '9';
    else if(s[i] == '9') s[i] = '6';
  }
  
  cout<<s<<endl;
}