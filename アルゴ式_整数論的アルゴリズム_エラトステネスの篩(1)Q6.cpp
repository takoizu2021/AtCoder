#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

int main() {
	long long a,b;
	cin>>a>>b;

    // √bまでの合成数をふるい落とすための篩
    // ここでは大きめにサイズ1100000まで確保しておく
	vector<bool> isprime (1100000,true);

    // a以上b以下の整数vが素数かどうか
    // その答えはisprime[b-a]に格納される
    vector<bool> isprime2 (b-a+1,true);

    // ふるい
    for(long long p=2; p*p<=b; ++p) {
        // すでに合成数であるものはスキップ
        if(!isprime[p]) continue;

        // p以外のpの倍数から素数ラベルを剥奪
        for(long long q=p*2; q*q<=b; q+=p) {
            isprime[q] = false;
        }

        // start:a以上の最小のpの倍数
        long long start = (a+p-1)/p*p;
        if(start==a) start=p*2;

        // a以上b以下の整数のうち、pの倍数をふるう
        for(long long q=start; q<=b; q+=p) {
            isprime2[q-a] = false;
        }        
    }

    // 答え
    long long res=0;
    for(long long q=a; q<=b; ++q) {
        if(isprime2[q-a]) ++res;
    }

    cout<<res<<endl;
	return 0;
}