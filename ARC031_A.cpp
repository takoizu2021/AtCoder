#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 string n;
 cin >> n;
  
 int count = 1;
 
  if(n.size() % 2 == 0) {
    rep(i,n.size() / 2) {
      if( n[i] == n[n.size() - 1 -i] ) {
        
      }
      else {
        count = 0;
        break;
      }
    }
  }
  
  else if(n.size() % 2 == 1) {
    rep(i, (n.size() - 1) / 2) {
      if( n[i] == n[n.size() - 1 -i] ) {
        
      }
      else {
        count = 0;
        break;
      }
    }
  }
  
  if(count > 0) {
    cout << "YES" << endl; 
  }
  else {
    cout << "NO" << endl; 
  }
 
}