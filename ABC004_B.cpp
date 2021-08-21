#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  vector<string> m(4);
  rep(i,4) getline(cin, m[i]);
  
  for(int i=3; i>=0; i--) {
    for(int j=6; j>=0; j--) {
      cout<<m[i][j];
    }
    cout<<endl;
  }  
}