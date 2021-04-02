#include<iostream>
using namespace std;
int main(){
	int n, m, a;
	cout << "Nhap n, m, a :";
	cin >> n >> m >> a;
	int T = (n * m) / a / a;
	cout << "So vien gach can mua la: " << T;
	return 0;
}
