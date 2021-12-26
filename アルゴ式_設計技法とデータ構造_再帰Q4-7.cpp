#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// �ċA�֐� (N = n, L = l, R = r �̂Ƃ��̖��̓���)
vector<vector<int> > func(int n, int l, int r) {
    // l > r �̂Ƃ��A��z���ԋp����
    if(l > r) return {};

    // n = 0 �̂Ƃ��A��z��̓�������z���ԋp����
    if(n == 0) return {{}};

    // ����ȊO�̂Ƃ��A��蕶�̒ʂ�ɓ������쐬����
    vector<vector<int> > ans;
    // n-1 �Ԗڂ̗v�f�Ƃ��� l ��I�񂾏ꍇ
    for (auto x : func(n-1,l,r)) {
        vector<int> to = {l};
        to.insert(to.end(), x.begin(), x.end());
        ans.push_back(to);  
    }

    // l ��I�΂Ȃ������ꍇ
    for(auto x: func(n,l+1,r)) {
        ans.push_back(x);
    }

    return ans;
}

int main() {
	int n,l,r;
	cin>>n>>l>>r;

    vector<vector<int> > ans = func(n,l,r);
    for(vector<int> x : ans) {
        int mx = x.size();
        for(int i=0; i<mx; ++i) {
            cout << x[i];
            if(i!=x.size()-1) cout<<" ";
            else cout<<endl;
        }
    }

}