#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

double f(double x) {
    return x*(x*(x+1)+2)+3;
}

int main() {
    double n;
    cin>>n;

    // 二分探索 (Xは 0 以上 100 以下であることがわかっている)
    double left=0, right=100;
    while(right-left > 1e-4) { // 精度が十分良くなるまで
        // left と right の 中点 mid をとる
        double mid = (left + right) / 2;        
        if(f(mid) < n) { // もし f(mid) < N ならば答えは mid より大きく right 以下
            left = mid; // 範囲を狭める
        }
        else { // そうでなければ答えは left 以上 mid 以下
            right = mid; // 範囲を狭める
        }
        //cout<<left<<" : "<<right<<" : "<<mid<<endl;
    }


  // 答えは left 以上 right 以下であることがわかっている。
  // 精度は十分なので、ここでは left の値を出力する。
    double ans = left;
    cout << ans << endl;
	return 0;
}