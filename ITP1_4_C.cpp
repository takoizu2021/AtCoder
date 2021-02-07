#include <bits/stdc++.h>
using namespace std;

int main() {

  int a,b;
  char op;
  
  for (int i = 0; i < 1000; i++) {
    cin >> a >> op >> b;
    if (op != '?') {
      if (op == '+') {
        cout << a + b << endl;
      }
      if (op == '-') {
        cout << a - b << endl;
      }
      if (op == '*') {
        cout << a * b << endl;
      }
      if (op == '/') {
        cout << a / b << endl;
      }
    }
  }
}
