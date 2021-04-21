#include <bits/stdc++.h>

using namespace std;

int gt(int n) {
	if(n==1)
		return n;
	return n*gt(n-1);
}

int myPow(float a, int b) {
	float result = 1;
	for(int i = 0; i < b; i++)
		result*=a;
	return result;
}

float calc(int n, float x) {
	float sum = 0;
	int tu, mau, dau = 1;
	for(int i = 0; i <= n; i++)
	{
		tu = myPow(x,(2*i)+1);
		dau*=-1;
		mau = gt((2*i)+1);
		sum += (tu/mau)*dau;
	}
	return sum;
}	

int main() {
	int n; float x;
	cin >> n >> x;
	cout << ;
}


