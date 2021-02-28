#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  int ct = 0;
  int h = 0;
  int th = 0;
  rep(i,n) {    
    cin >> h;
    if(h >= th) {
      ct++;
    }
    th = max(th,h);    
  }
  cout << ct << endl;
}