#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	long long n;
    cin>>n;

	// ��N �𐮐��ɃL���X�g����
    // ���l�덷��������邽�߁AEPS = 10^-9 �𑫂��Ă���
	const double eps = 1e-9;
	long long sqr = (long long)(sqrt(n) + eps);
    cout<< sqr <<endl;
	return 0;
}