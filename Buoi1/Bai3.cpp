#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	float x, y;
	
	cin >> n >> m >> x >> y;
	if(n>m)
		cout << "there are" << n << "dogs" << endl;
	else
	 	cout << "there are" << n << "cats" << endl;
	 	
	if(x>y)
		cout << "gau gau" << x << "times" << endl;
	else
	 	cout << "meo meo" << y << "times" << endl;
}


