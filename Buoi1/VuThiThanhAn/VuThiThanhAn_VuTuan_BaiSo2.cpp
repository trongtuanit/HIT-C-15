#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout <<"Nhap a = "; 
	cin >> a;
	while(a < 0){
		cout <<"Nhap lai a = "; 
		cin >> a;
	}
	cout <<"Nhap b = "; 
	cin >> b;
	while(b < 0){
		cout <<"Nhap lai b = "; 
		cin >> b;
	}
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b;
	return 0;
}
