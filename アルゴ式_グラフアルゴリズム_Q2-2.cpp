#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// �O���t��\���f�[�^�\��
using G = vector<vector<int> >;

// ���_ v �����Ƃ��镔���؂�T��
void rec (int v, const vector<vector<int> > &chs) {
     // ���_ v ���o��
    cout<< v <<" ";

    // ���_ v �̊e�q���_��T��
    for(auto ch : chs[v]) {
        // �q���_ ch �����Ƃ��������؂��ċA�I�ɒT��
        rec(ch, chs);
    }
}

int main() {
    int n;
    cin>>n;
    vector<vector<int> > chs(n);
    for(int v=1; v<n; ++v) {
        int p;
        cin>>p;

        chs[p].push_back(v);
    }

    rec(0, chs);
    cout<<endl;
	return 0;
}