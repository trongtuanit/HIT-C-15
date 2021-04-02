#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Nhap a: ";
	cin >> a;
	if(a > 0 && a < 13){
		cout << "Thang " << a << ".";
	} else{
		cout << "Khong phai la 1 thang trong nam!";
	}
 return 0;
}

