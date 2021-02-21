#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n,k;
  cin >> n >> k;
  
  int count = 0;
  for(int i = 1; i <= n; i += 2) {
    count++;
    if(count == k) {
      break;
    }    
  }
  if(count == k) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}