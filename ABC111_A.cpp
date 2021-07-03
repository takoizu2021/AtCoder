#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  rep(i,n.size()) {
    if(n[i] == '1') {
      n[i] = '9';
      cout<<n[i];
    }
    else {
      n[i] = '1';
      cout<<n[i];
    }
    if(i == n.size()-1) cout<<endl;
  }
  
}