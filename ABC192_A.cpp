#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int x;
  cin >> x;
  int y = 100;
  
  if(x >= 100) {
    x %= 100;
  }  
  y -= x;
  
  cout << y << endl;
}
