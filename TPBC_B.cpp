#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int a,b,k;
  cin >> a >> b >> k;
  
  int count = 0;
  
  while(1) {
    // a‚©‚çn‚ß‚éB
    if(a % 2 == 0) {
      a /= 2;
      b += a;
    }
    else {
      a -= 1;
      a /= 2;
      b += a;
    }
    
    count++;
    if(count == k) {
      break;
    }
    
    // b‚Ì”ÔB
    if(b % 2 == 0) {
      b /= 2;
      a += b;
    }
    else {
      b -= 1;
      b /= 2;
      a += b;
    }
    
    count++;    
    if(count == k) {
      break;
    }
  }
  
  cout << a << " " << b << endl;  
  
}
