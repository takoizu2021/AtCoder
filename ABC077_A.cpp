#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  string a,b;
  cin >> a >> b;
  if(a[0] == b[2] && a[1] == b[1] && a[2] == b[0] ) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  
}