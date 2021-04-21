#include <bits/stdc++.h>

using namespace std;

bool isPrimeNumber(int n) {
	if(n<2) return false;
	if(n==2) return true;
	for(int i = 2; i <= sqrt(n); i++)
		if(n%i==0) 
			return false;
	return true;
}

void setArr(float *&a, int &n) {
	cin >> n;
	a = new float[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
}

void getArr(float *a, int n) {
	cout << "Your array: " << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << "  ";
}

float calc(float *a, int n) {
	float sum = 0;
	for(int i = 0; i < n; i++)
		if(isPrimeNumber((int)a[i])==true)
			sum+=a[i];
	return sum;
}

void del(float *&a, int &n, int k) {
	for(int i = k; i < n-1; i++) 
		a[i] = a[i+1];
	n--;
	a = (float*) realloc (a,n*sizeof(float));
}

void delNumHasBigDec(float *&a, int &n) {
	for(int i = 0; i < n; i++) 
		while((a[i] - (int)a[i]) >= 0.5) 
			del(a,n,i);
		
}

int main() {
	int n;
	float *a;
	setArr(a,n);
	cout << "Sum: " << calc(a,n) << endl;
	delNumHasBigDec(a,n);
	getArr(a,n);
	
	
}


