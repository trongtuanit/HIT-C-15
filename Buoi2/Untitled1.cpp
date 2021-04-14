#include <bits/stdc++.h>

using namespace std;

int main() {
	for(int i = 0; i < 10; i++) 
		cout << " " << i << " ";
	cout << endl;
	
	for(int i = 10; i < 100; i+=10) {
		for(int j = i; j < i+10; j++) 
			cout << j << " ";
		cout << endl;
	}
}


