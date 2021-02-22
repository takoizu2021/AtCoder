#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 int a,d;
 cin >> a >> d;
 int n = min(a,d);
 int x = max(a,d);
   cout << (n + 1) * x << endl; 
}