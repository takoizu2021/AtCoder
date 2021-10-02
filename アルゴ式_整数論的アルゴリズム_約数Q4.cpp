#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

// N の約数をすべて求める関数
vector<long long> calc_divisors(long long &n) {
    // 答えを表す集合
    vector<long long> res;

    // 各整数 i が N の約数かどうかを調べる
    for(long long i=1; i*i<=n; ++i) {
        // i が N の約数でない場合はスキップ
        if(n%i!=0) continue;

        // i は約数である
        res.push_back(i);

        // N ÷ i も約数である (重複に注意)
        if(n/i != i) res.push_back(n/i);        
        
    }
    // 約数を小さい順に並び替えて出力
    sort(res.begin(), res.end());

    return res;
}

int main() {
    // 入力
    long long n;
    cin>>n;

    // 約数の個数
    vector<long long> divs = calc_divisors(n);

	long long ans=inf, len=divs.size();
	for (long long a=0; a<len; ++a) {
			long long b=n/divs[a];
			ans = min(ans,divs[a]+b);
	}

    cout<< ans <<endl;
	return 0;
}