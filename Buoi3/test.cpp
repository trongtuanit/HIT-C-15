#include<iostream>
#include<cmath>
using namespace std;

void NhapMang(int a[],int &n){
	for(int i=0;i<n;i++){
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i];
	}
}
void XuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


bool KiemTraSoChinhPhuong(int n){
    int can=sqrt(n);
    if(can*can==n){
    	return true;
	}
	return false;
}


void SapXep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void Delete(int a[],int &n,int k){
	for(int i=k+1;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
void  KiemTra(int a[],int &n){
	for(int i=0;i<n;i++){
		if(KiemTraSoChinhPhuong(a[i])==false){
			Delete(a,n,i);
			i--;
		}
	}
	SapXep(a,n);
}
int main(){
	int a[100],n;
	cout<<"Nhap n = ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\n";
	KiemTra(a,n);
	XuatMang(a,n);

}

