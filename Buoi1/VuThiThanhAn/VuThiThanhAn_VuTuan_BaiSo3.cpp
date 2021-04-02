#include<iostream>
using namespace std;
int main(){
	int n, m;
	float x, y;
	cout << "Nhap n, m, x, y :";
	cin >> n >> m >> x >> y;
	if(n > m){
		cout << "Co " << n << " con cho" << endl;
	}else{
		cout << "Co " << m << " con meo" << endl;
	}
	if(x > y){
		cout << "gau gau " << x << " lan" << endl;
	}else{
		cout << "meo meo " << y << " lan";
	}
	
	return 0;
}
