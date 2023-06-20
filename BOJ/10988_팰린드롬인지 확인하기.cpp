#include <bits/stdc++.h>
using namespace std;

string origin,rev;

int main() {
	
	cin >> origin;
	rev = origin;
	
	reverse(rev.begin(),rev.end());
	
	if (rev == origin) cout << 1 << "\n";
	else cout << 0 << "\n";
	
	return 0;
}
