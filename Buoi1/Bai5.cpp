#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, a;
	cin >> m >> n >> a;
	int b = m/a;
	int c = n/a;
	if(m%a != 0)
		b+=1;
	if(n%a != 0)
		c+=1;
	cout << "So gach can mua la: " << b*c;
}


