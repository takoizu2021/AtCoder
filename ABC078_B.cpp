#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int x,y,z;
  cin>>x>>y>>z;
  
  x = x-z;;
  int ans = x/(y+z);
    
  cout<<ans<<endl;  
}