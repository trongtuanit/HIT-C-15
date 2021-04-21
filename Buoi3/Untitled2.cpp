#include <bits/stdc++.h>

using namespace std;

bool isSquareNumber(int a) {
	for(int i = 0; i <= sqrt(a); i++)
		if(i*i==a) return true;
	return false;
}

bool isSquareArray(int *a, int n) 
{
	for(int i = 0; i < n; i++)
		if(!isSquareNumber(a[i])) return false;
	return true;
}

void getArray(int *a, int n) {
	for(int i = 0; i < n; i++)
		cout << a[i] << "  ";
}

void sortArray(int *&a, int n) 
{
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[i]>a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		
}

void deleteNumber(int *&a, int &n, int k)
{
	for(int i = k; i < n; ++i) 
		a[i] = a[i+1];
	n--;
	a = (int*) realloc (a,n*sizeof(int));
}


void DeleteNormalNumber(int *&a, int &n) {
	for(int i = 0; i < n; i++)
		if(!isSquareNumber(a[i]))
			deleteNumber(a,n,i);
}


int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	if(isSquareArray(a,n))
	{
		sortArray(a,n);
		getArray(a,n);
	}
	else
	{
		DeleteNormalNumber(a,n);
		getArray(a,n);
	}
	
}


