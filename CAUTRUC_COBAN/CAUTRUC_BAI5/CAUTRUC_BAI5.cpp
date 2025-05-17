#include <iostream>
#include <cstring>
using namespace std;

typedef struct Phongks {
    char ma[6], ten[31];
    double gia;
    int sogiuong, tinhtrang;
} phong[10];

void Nhap(phong a[10], int n) {
    for (int i = 0 ;i<n;i++) {
        cin>>a[i]->ma>>a[i]->ten>>a[i]->gia>>a[i]->sogiuong>>a[i]->tinhtrang;
    }
}

void Xuat(phong a[10], int n) {
    for (int i=0;i<n;i++) {
        cout<<"Thong tin cua phong "<<a[i]->ten<<": ";
        cout<<"Ma phong: "<<a[i]->ma<<endl;
        cout<<"Gia phong: "<<a[i]->gia<<endl;
        cout<<"So giuong: "<<a[i]->sogiuong<<endl;
        cout<<"Tinh trang: ";
        if (a[i]->tinhtrang==1) {
            cout << "ban";
        }
        else {
            cout<< "ranh";
        }
        cout<<endl;
    }
}

void PhongTrong(phong a[10],int n) {
	cout<<"Cac phong con trong la: ";
	for (int i=0;i<n;i++) {
		if (a[i]->tinhtrang==0) {
			cout<<a[i]->ten;
		}
		else {
			cout<<"0";
			break;
		}
	}
	cout<<endl;
}

int TongSoLuongGiuong(phong a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->sogiuong;
	}
	return sum;
}

int main() {
    int n;
    cin >> n;
    phong a[10];
    Nhap(a, n);
    Xuat(a, n) ;
    PhongTrong(a,n);
    int sum = TongSoLuongGiuong(a,n);
    cout<<"Tong so giuong: "<<sum;
    return 0;
}
