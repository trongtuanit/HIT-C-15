#include <bits/stdc++.h>

using namespace std;

int main() {
	int viTri = 1;
	for(int i = -50; i < 51; i++ )
	{
		if(viTri%3==0 && viTri%5==0)
			cout << "fizzbuzz  ";
		else if (viTri%3==0 )
			cout << "fizz  ";
		else if (viTri%5==0 )
			cout << "fizz  ";
		else
			cout << i << "  ";
		viTri++;
	}
}


