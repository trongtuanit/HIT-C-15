#include <bits/stdc++.h>

using namespace std;

bool isPerfectNumber(int a) {
	int sum = 0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0) 
            sum+=i;  
    if(sum==a) 
		return true; 
    return false;
}

bool isPerfectArray(int *a, int n) 
{
	for(int i = 0; i < n; i++)
		if(!isPerfectNumber (a[i]))
			return false;
	return true;
}

void findMaxAndMin(int *a, int n, int &max, int &min) {
	max = min = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
}

void deleteNumber(int *&a, int &n, int k)
{
	for(int i = k; i < n; ++i) 
		a[i] = a[i+1];
	n--;
	a = (int*) realloc (a,n*sizeof(int));
}


void deleteOddNuber(int *&a, int &n) {
	for(int i = 0; i < n; i++)
		if((a[i])%2!=0)
			deleteNumber(a,n,i);
}


void getArray(int *a, int n) {
	for(int i = 0; i < n; i++)
		cout << a[i] << "  ";
}

int main() {
	int max, min, n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	if(isPerfectArray(a,n)) {
		findMaxAndMin(a,n,max,min);
		cout << max - min;
	}
	else {
		deleteOddNuber(a,n);
		getArray(a,n);
	}
}


