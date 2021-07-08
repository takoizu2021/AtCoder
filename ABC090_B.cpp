#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  int ans=0;
  for(int i=a; i<=b; i++) {
    string s  = to_string(i);
    reverse(s.begin(),s.end());
    int cs = stoi(s);
    if(cs == i) ans++;
    //cout<<cs<<endl;
  }
  cout<<ans<<endl;
    
}