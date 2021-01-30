#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  //cout << A << B << C << endl;
  if (A == B) {
    if (C == 0) {
      cout << "Aoki" << endl;
    }
    else {
      cout << "Takahashi" << endl;
    }
  }
  
  if (A > B) {
    cout << "Takahashi" << endl;
  }
  else if (A < B) {
    cout << "Aoki" << endl;
  }
}
