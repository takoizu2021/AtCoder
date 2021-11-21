#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int f(int A,int B) {
  if(A == B) return A;
  else {
    return f(A,B-1)+B;
  }
}

int main() {
  int A,B;
  cin>>A>>B;

	cout << f(A,B) << endl;
	return 0;
}