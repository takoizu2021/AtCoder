#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> x(n), y(n);
	for(int i=0; i<n; ++i) cin>>x[i]>>y[i];

	//二頂点間の距離を求める関数
	auto calc = [&](int i, int j) -> double {
		return sqrt( (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]) );
	};

	//答え
	double res = 0.0;

	// 頂点[v] <- 頂点vを既に訪れたか
	vector<bool> used (n,false);
	used[0]=true;

	//前回の頂点
	int prev = 0;

	//毎回貪欲に頂点を求めてゆく
	for(int i=0; i<n-1; ++i) {
		//残っている頂点で近いところを探す
		int nex = -1;
		double min_dis = 1000000;
		for(int j=1; j<n; ++j) {
			//既に訪れた頂点はスキップ
			if(used[j]) continue;
			double dis = calc(prev, j);
			if(min_dis > dis) {
				min_dis = dis;
				nex = j;
			}
		}

		//新たに頂点 nex を訪れる
		used[nex] = true;
		res += min_dis;

		//前回頂点を更新
		prev = nex;
	}

	//最後に頂点 0 に戻る
	res += calc(prev, 0);

	cout << fixed << setprecision(10) << res << endl;
	return 0;
}