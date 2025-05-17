#include <iostream>
#include <cstring>
using namespace std;

typedef struct vexemphim{
	char ten[21], thoigian[9], ngay[11];
	int gia;
}ve[10];

void Nhap(ve a[10],int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->gia>>a[i]->thoigian>>a[i]->ngay;
	}
}


void Xuat(ve a[10],int n) {	
	for (int i=0;i<n;i++) {
		cout<<"Ve xem phim co trong danh sach: "<<a[i]->ten<<" ";
	}
	cout<<endl;
}

int TongGiaTienCacVe(ve a[10],int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->gia;
	}
	return sum;
}

int main() {
	return 0;
}
