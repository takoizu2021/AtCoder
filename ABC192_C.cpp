#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    stringŒ^‚ğintŒ^‚É•ÏŠ·‚·‚é
//string str = to_string(num);   intŒ^‚ğstringŒ^‚É•ÏŠ·‚·‚é

int main() {
  
  int n,k;
  cin >> n >> k;
  
  int g1,g2;
  
  rep(i,k) {
    string num = to_string(n); 
    // ~‡ g2
    sort(num.begin(), num.end());
    g2 = atoi(num.c_str());
    // ¸‡ g1
    reverse(num.begin(), num.end());
    g1 = atoi(num.c_str());
    // n = f1 = (g1 - g2)
    n = g1 - g2;
  }
    cout << n << endl;
}
