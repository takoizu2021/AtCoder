#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  string a,b,c;
  cin >> a >> b >> c;
  char dif = 'a' - 'A';
  a[0] -= dif;
  b[0] -= dif;
  c[0] -= dif;
  cout << a[0] << b[0] << c[0] << endl;
  
}