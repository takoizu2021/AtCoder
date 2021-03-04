#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  string n;
  cin >> n;
  
  if(n[0] == n[1] && n[0] == n[2] && n[0] == n[3]) {
    cout << "SAME" << endl;
  }
  else { cout << "DIFFERENT" << endl;}
}