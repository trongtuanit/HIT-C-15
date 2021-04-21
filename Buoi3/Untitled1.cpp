#include <bits/stdc++.h>

using namespace std;

bool isPrimeNumber(int a) {
	for(int i = 2; i <= sqrt(a); i++)
		if(a%i==0)
			return false;
	return true;
}


bool isSuperPrimeNumber(int a) {
	while(a>0) {
		if(isPrimeNumber(a%10)==false)
			return false;
//		if(isPrimeNumber(a/10)==false)
//			return false;
		a/=10;
	}
	return true;

}

bool isSuperSuperPrimeNumber(int a) {
	while(a>0) {
//		if(isPrimeNumber(a%10)==false)
//			return false;
		if(isPrimeNumber(a/10)==false)
			return false;
		a/=10;
	}
	return isPrimeNumber(a);

}



int main() {
	int n;
	cin >> n;
	int sum = 0;
	int *a = new int[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++) {
		if(isSuperPrimeNumber(a[i])) 
			cout << a[i] << "  ";
		if(isSuperPrimeNumber(a[i])) 
			sum += a[i];
		
	}
	cout << endl << "Sum of super super prime numbers: " << sum;
}


