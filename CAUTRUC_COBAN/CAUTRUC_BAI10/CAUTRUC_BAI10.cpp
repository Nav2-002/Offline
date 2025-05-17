#include <iostream>
#include <cstring>
using namespace std;

typedef struct chuyenbay{
	char ma[6],ngay[3],thoigian[9],noidi[21],noiden[21];
}chuyen[10];

void Nhap(chuyen a[10],int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ma>>a[i]->ngay>>a[i]->thoigian>>a[i]->noidi>>a[i]->noiden;
	}
}


void Xuat(chuyen a[10],int n) {	
	for (int i=0;i<n;i++) {
		cout<<"Thong tin cua chuyen bay "<<a[i]->ma<<": ";
		cout<<"Ngay bay: "<<a[i]->ngay<<endl;
		cout<<"Gio bay: "<<a[i]->thoigian<<endl;
		cout<<"Noi di: "<<a[i]->noidi<<endl;
		cout<<"Noi den: "<<a[i]->noiden<<endl;
	}
}

void TimChuyenBayTheoMa(chuyen a[10],int n) {
	char b[6];
	cin>>b;
	for (int i=0;i<n;i++){
		if (strcmp(a[i]->ma,b) == 0){
			cout<<"Thong tin cua chuyen bay "<<a[i]->ma<<": ";
			cout<<"Ngay bay: "<<a[i]->ngay<<endl;
			cout<<"Gio bay: "<<a[i]->thoigian<<endl;
			cout<<"Noi di: "<<a[i]->noidi<<endl;
			cout<<"Noi den: "<<a[i]->noiden;
			break;}
		else if(i=n-1 && strcmp(a[i]->ma,b)!=0) {
			cout<<"Khong tim duoc chuyen bay";
		}
	}
}


int main() {
	int n;cin>>n;
	chuyen a[10];
	Nhap(a,n);
	TimChuyenBayTheoMa(a,n);
	return 0;
}
