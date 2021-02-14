#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int m,f,r; //m’†ŠÔAfŠú––ArÄŽŽŒ±
  
  while(true) {
    
    cin >> m >> f >> r;
    int p = m + f;
    
    if(m == -1 && f == -1 && r == -1) {
      break;
    }

    if(m == -1 || f == -1){
      cout << "F" << endl;
    }
    else if(p >= 80) {
      cout << "A" << endl;
    }
    else if(p >= 65 && p < 80) {
      cout << "B" << endl;
    }
    else if(p >= 50 && p < 65) {
      cout << "C" << endl;
    }
    else if(p >= 30 && p < 50) {
      if(r >= 50) {
        cout << "C" << endl;
      }
      else {
        cout << "D" << endl;
      }
    }
    else if (p < 30) {
      cout << "F" << endl;
    }
  }
}
