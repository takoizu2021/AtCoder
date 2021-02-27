#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  long long x;
  cin >> x;
  
  long long p = 100;
  int count = 0;
  while(p < x) {
    p += p / 100;
    count++;
  }
  cout << count << endl;
}