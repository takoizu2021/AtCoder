#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

long long divi_sum(long long n) {
    long long sum=0;
	for(long long i=1; i*i<=n; ++i) {
		if(n%i!=0) continue;
        sum += i;
		if(n/i!=i) sum += n/i;
    }
    sum -= n;
    
	return sum;
}

int main() {
	long long n;
	cin>>n;
    
	cout << (n==divi_sum(n) ? "Yes":"No") << endl;
	return 0;
}