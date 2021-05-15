#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> t(n);
  vector<string> a(n);
  vector<vector<string> > name(2,a);
  
  rep(i,n) {
    cin>>name[0][i]>>name[1][i];
    int ai = stoi(name[1][i]);
    t[i] = ai;
  }
    
  sort(t.begin(),t.end());
  reverse(t.begin(),t.end());
  
  //string ans = to_string(t[1]);
  //cout<<ans<<endl;
  rep(i,n) {
    string ans = to_string(t[1]);
    if(ans == name[1][i]) cout<<name[0][i]<<endl;
  }
}