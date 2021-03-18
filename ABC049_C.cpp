#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  string s;
  cin >> s;
  
  reverse(s.begin(), s.end());
  
  //   dream 5-1
  // dreamer 7-1
  //   erase 5-1
  //  eraser 6-1
  
  bool ans = true;
  for(int i = 0; i < s.size(); i++ ) {
    if (s.substr(i,5) == "maerd") {
      i += 4;
      continue;
    }
    if (s.substr(i,7) == "remaerd") {
      i += 6;
      continue;
    }
    if (s.substr(i,5) == "esare") {
      i += 4;
      continue;
    }
    if (s.substr(i,6) == "resare") {
      i += 5;
      continue;
    }
    else {
      ans = false;
      break;
    }
  }
  
  if(ans == false) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }  
}