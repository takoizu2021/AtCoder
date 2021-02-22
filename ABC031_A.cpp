#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 int a,d;
 cin >> a >> d;
 
 if(a <= d ) {
   cout << (a + 1) * d << endl; 
 }
 else {
   cout << a * (d + 1) << endl;
 }
}