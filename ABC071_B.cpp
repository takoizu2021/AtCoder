#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  vector<int> abc(26);
  rep(i,s.size()) abc[s[i]-'a']++;  
  
  string ans = "None";
  char ans_a;
  bool chk = false;
  rep(i,abc.size()) {
    if(abc[i] == 0) {
      ans_a='a'+i; chk=true;
      break;
    }
  }
  if(chk == false) cout<<ans<<endl;
  else cout<<ans_a<<endl;
}