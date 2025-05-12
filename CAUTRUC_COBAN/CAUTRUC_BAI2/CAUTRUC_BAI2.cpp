#include <iostream>
#include <cstring>
using namespace std;

typedef struct hocsinh {
    char hoten[31];
    double diemtoan, diemvan, trungbinh;
}hs[10];

void Nhap(hs a[10], int n) {
    for (int i=0;i<n;i++) {
        cin>>a[i]->hoten>>a[i]->diemtoan>>a[i]->diemvan>>a[i]->trungbinh;
        
    }
}

void DanhSachHS(hs a[10], int n) {
	cout<<"Danh sach hoc sinh: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->hoten<<" ";
	}
	cout<<"\n";
}

void HSinhDiemToanNhoHon5(hs a[10], int n) {
	cout<<"Hoc sinh co diem toan nho hon 5: ";
	for (int i=0;i<n;i++) {
		if (a[i]->diemtoan<5) {
			cout<<a[i]->hoten<<" ";
		}
	}
	cout<<"\n";
}

int HSDiemToanVanLonHon8(hs a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		if (a[i]->diemtoan>8 && a[i]->diemvan>8) {
			sum++;
		}
	}
	return sum;
}

//Giam dan diem trung binh
//a<b

bool SoSanh(hs a[10],int n) {
	bool check = true;
	for (int i=0;i<n-1;i++) {
		if (a[i]->trungbinh>a[i+1]->trungbinh) {
			check = false;
		}
	}
	return check;
}

void SapXepDiemTrungBinh(hs a[10], int n) {
	bool check = true;
	char tam[31];
	for (int i=0;i<n-1;i++) {
		check = SoSanh(a,n);
		if (check == true) {
			strcpy(tam,a[i]->hoten);
			strcpy(a[i]->hoten,a[i+1]->hoten);
			strcpy(a[i+1]->hoten,tam);
		}
	}
	cout<<"Danh sach hoc sinh diem trung binh giam dan: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->hoten<<" ";
	}
}

int main() {
    return 0;
}
