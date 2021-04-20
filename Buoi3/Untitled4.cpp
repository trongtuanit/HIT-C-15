#include <bits/stdc++.h>

using namespace std;

void deleteChar(char *a, int k) {
	for(int i = k; i < strlen(a); i++) 
		a[i] = a[i+1];
	a[strlen(a)] = '\0'; // tuong duong int n = strlen(a) dong 6, a[n-1] = '\0' dong 9
	
}

void chuanHoa(char *a) {
	while(a[0]==' ') { // ' '' 'Mon Hoc -> MonHoc
		deleteChar(a,0);
	}
	while(a[strlen(a)-1]==' ') { // Mon Hoc' '' ' -> Mon Hoc
		deleteChar(a,strlen(a)-1);
	}
	if(a[0]>='a' && a[0]<='z') // mon Hoc -> Mon Hoc
		a[0]-=32;
	for(int i = 1; i < strlen(a)-1; i++) {
		if(a[i-1]==' ' && ((a[i]>='a' && a[i]<='z'))) // Mon hoc-> Mon Hoc
			a[i]-=32;
		if(a[i]==' ' && a[i+1]==' ') // Mon  Hoc -> Mon Hoc
			deleteChar(a,i);
		if((a[i]>='A' && a[i]<='Z') && (a[i+1]>='A' && a[i+1]<='Z')) // Mon HOc -> Mon Hoc
			a[i+1]+=32;
		if((a[i]>='a' && a[i]<='z') && (a[i+1]>='A' && a[i+1]<='Z')) // Lai SuAt -> Lai Suat
			a[i+1]+=32;		
	}
}


int main() {
	char s[100];
	fflush(stdin);
	gets(s);
	chuanHoa(s);
	cout << s << endl; 
	cout << strlen(s) << endl;
}


