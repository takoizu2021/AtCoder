#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    // それぞれの生徒の得票数を集計する
    vector<int> nums(n,0);
    for(auto val:a) ++nums[val];

    // 生徒番号を表す配列を作る
    vector<int> students(n);
    rep(i,n) students[i] = i;

    // 得票数が多い順に並び替える
    // 得票数が等しいところは生徒番号が小さい順になるように安定ソートを使う
    auto cmp = [&](int x, int y) -> bool {
        return nums[x] > nums[y];
    };
    stable_sort(students.begin(), students.end(), cmp);

    for(auto i : students) {
        cout<<i<<" "<<nums[i]<<endl;
    }
	return 0;
}