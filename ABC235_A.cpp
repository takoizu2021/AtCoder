#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  string a;
  cin>>a;
  
  a += a;
  string abc = a.substr(0,3);
  string bca = a.substr(1,3);
  string cba = a.substr(2,3);
  int x = stoi(abc);
  int y = stoi(bca);
  int z = stoi(cba);
  cout<<x+y+z<<endl;
}