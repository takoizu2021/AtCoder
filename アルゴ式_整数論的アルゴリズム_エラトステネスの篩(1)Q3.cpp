#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

vector<bool> eratosthenes (int n) {
    vector<bool> isprime(n+1,true);
    isprime[0]=isprime[1]=false;	
	for(int p=2; p<=n; ++p) {
		if(!isprime[p]) continue;
        for(int q=p*2; q<=n; q += p) {
            isprime[q]=false;
        }		
	}    
	return isprime;
}
int main() {
	int n;
	cin>>n;
	vector<bool> isprime = eratosthenes(n);

    int res=0;
    for(int i=2; i<=n; ++i) if(isprime[i]) res++;

    cout<<res<<endl;   
    
	return 0;
}