#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  string s;
  cin >> s;
  
  char moji;
  int a;
  int count = 0;
  
  rep(i,s.size()) {
    if(i == 0 || i % 2 == 0) {
      int a = s[i];
      if(a < 97) { //奇数文字目に小文字<97　でない　文字があれば
        count++; 
      }
    }
  
    else if(i % 2 != 0) {
      int a = s[i];
      if(a >= 97) { //偶数文字目に大文字>=97　でない　文字があれば
        count++; 
      }
    }
  }
  
  if(count > 0) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
  
  
}
