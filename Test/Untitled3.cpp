#include <bits/stdc++.h>

using namespace std;
void setArr(int *&a, int &n) {
	cin >> n;
	a = new int[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
}

void getArr(int *a, int n) {
	cout << "Your array: " << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << "  ";
}
int main() {
	int n;
	int *a;
	setArr(a,n);
}


