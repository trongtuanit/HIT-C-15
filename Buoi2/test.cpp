#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
	int a = 0;
	for (int i=0; i<10; i++){
		int j=0;
		while(j < 10){
			while(n>0 && n!=0){
				a=n%10;
				s=s+a;
				n=n/10;
			}
			if(s%3==0)
				cout << "fizz ";
			if(s%5==0)
				cout << "buzz ";
			if(s%5==0 && s%3==0 )
				cout << "fizzbuzz ";
			cout << s << " ";
			cout << a << " ";
			j++;
			a++;
		}
		cout << endl;
	}

  
