#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  string n;
  cin>>n;
  int a=4 - n.size();
  
  for(int i=0; i<a; ++i) cout<<"0";
  cout<<n<<endl;
}