#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int ans = 753;
  for(int i=0; i<s.size()-2; i++) {
    string sub = s.substr(i,3);
    int num = stoi(sub);
    if(753 >= num) {
      ans = min(ans,753-num);
    }
    else ans = min(ans,num-753);
  }
  cout<<ans<<endl;
}