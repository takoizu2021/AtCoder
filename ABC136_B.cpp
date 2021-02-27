#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  
  int ct = 0;
  rep2(i,1,n + 1) {
    //stringŒ^‚É•ÏŠ·‚µ‚ÄŒ…‚ğ”‚¦‚é
    string str = to_string(i);
    if(str.size() % 2 == 0) {
      continue;
    }
    else {
      ct++;
    }
  }
  
  cout << ct << endl;
}