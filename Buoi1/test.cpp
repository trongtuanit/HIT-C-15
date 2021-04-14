#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,m,a;
	cin >> n>> m >> a;
	int CN,V;
	CN= n*m;
	V= a*a;
	cout <<"So vien gach can mua la "<<ceilf((float)CN/(float)V);
	return 0;
}
