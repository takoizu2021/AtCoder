#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 string a;
 cin >> a;
 rep(i,a.size() - 8) {
   if(i == a[a.size() - 9]) {
     cout << a[i] << endl;
   }
   cout << a[i];
 }
}