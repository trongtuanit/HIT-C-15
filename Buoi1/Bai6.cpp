#include <bits/stdc++.h>

using namespace std;

int main() {
	int a; cin >> a;
	int t = 0;
	cout << fixed << setprecision(5) << 0.4 <<endl;
	if(a < 50){
	    t = a*1500;
		cout << "So tien dien la: " << t;
	}else if(a >= 50 && a < 100){
		t = a*2500;
		cout << "So tien dien la: " << t;	
	}else if(a > 100 && a < 150){
		t = a*3500;
		cout << "So tien dien la: " << t;
	}else if(a > 150 && a < 200){
		t = a*4000;
		cout << "So tien dien la: " << t;
	}else{
		t = a*5000;
		cout << "So tien dien la: " << t;
	}
}


