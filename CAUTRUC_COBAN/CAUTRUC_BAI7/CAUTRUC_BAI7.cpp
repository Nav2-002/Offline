#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

typedef struct Tinh{
	char ten[31];
	double DT;
	int danso;
}tinh[10];

void Nhap(tinh a[10], int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->DT>>a[i]->danso;
	}
}

void Xuat(tinh a[10],int n) {
	for (int i=0;i<n;i++) {
		cout<<"Thong tin cua tinh "<<a[i]->ten<<": ";
		cout<<"Dien tich: "<<a[i]->DT<<endl;
		cout<<"Dan so "<<a[i]->danso<<endl;
	}
}

int TongDT(tinh a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->DT;
	}
	return sum;
}

void TinhDTMax(tinh a[10],int n) {
	double max = INT_MIN;
	int k=0;
	for (int i=0;i<n;i++) {
		if (max<a[i]->DT) {
			max = a[i]->DT;
			k = i;
		}
	}
	cout<<"Tinh co DT lon nhat la: "<<a[k]->ten;
}

void TinhDanSoMax(tinh a[10],int n) {
	double max = INT_MIN;
	int k=0;
	for (int i=0;i<n;i++) {
		if (max<a[i]->danso) {
			max = a[i]->danso;
			k = i;
		}
	}
	cout<<"Tinh co DT lon nhat la: "<<a[k]->ten;
}



int main() {
	return 0;
}
