#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  string rgb="aaa";
  char c;

  rep(i,3) {
    cin>>c;
    rgb[i]=c;
  }
  long long num = stol(rgb);        //string型をll型に変換する
  if(num%4==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}