#include <bits/stdc++.h>
using namespace std;

int main() {
  
 int t;
 cin >> t;
 int h,m,s;
 h = t / 3600;
 m = (t - (h * 3600)) / 60;
 s = t - (h * 3600) - (m * 60);
 cout << h << ":" <<  m << ":" << s << endl;
  
}
