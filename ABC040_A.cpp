#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n,x;
  cin >> n >> x;  
  int a = min(x-1,n-x);
  cout << a << endl;
}