#include <iostream>
#include <cstring>
using namespace std;
typedef struct NhanVien {
    char hoten[31];
    char ngaysinh[11];
    double luong;
    int gioitinh;
}nvien[10];

void Nhapnvien(nvien a[10], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i]->hoten;
        cin >> a[i]->ngaysinh;
        cin >> a[i]->luong;
        cin >> a[i]->gioitinh;
    }
}

void Xuatnvien(nvien a[10],int n) {
    cout << "Danh sach nhan vien:";
    for (int i = 0; i < n; i++) {
        cout << a[i]->hoten<<"\t";
    }
}
//01/01/1985
void NvienLonHon40(nvien a[10], int n) {
    cout << "Nhan vien tren 40 tuoi:";
    for (int i = 0; i < n; i++) {
        if (a[i]->ngaysinh[6] <= '1' && a[i]->ngaysinh[7] <= '9' && a[i]->ngaysinh[8] <= '8' && a[i]->ngaysinh[9] < '5') {
            cout << a[i]->hoten<<"\n";
        }
    }
}

int SoNvienLuongNhieuHon1tr(nvien a[10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]->luong > 1000000) {
            sum++;
        }
    }
    return sum;
}
//a>b false = a>b
bool SoSanhNamSinhNvien(nvien a[10], int n) {
    bool check = true;
    char A[4], B[4];
    for (int i=0;i<n-1;i++) {
        int k=0;
        for (int j=6;j<=9;j++) {
            A[k]= a[i]->ngaysinh[j];
            B[k]= a[i+1]->ngaysinh[j];
            if (A[k] < B[k]) {
                return false;
            }
            k++;
        }
    }
 }

void NvienTangDanTuoi(nvien a[10], int n) {
    bool check = true;
    check = SoSanhNamSinhNvien(a, n);
    char tam[31];
    for (int i=0;i<n-1;i++) {
        if (check == false) {
            strcpy(tam,a[i+1]->hoten);
            strcpy(a[i+1]->hoten,a[i]->hoten);
            strcpy(a[i]->hoten,tam);
        }
    }
    cout<<"Danh sach nam sinh nhan vien giam dan: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]->hoten;
    }
}

int main() {
    int n;
    cin >> n;
    nvien a[10];
    Nhapnvien(a, n);
    Xuatnvien(a, n);
    NvienLonHon40(a, n);
    cout<<"Danh sach nhan vien luong hon 1tr: ";
    int sum = SoNvienLuongNhieuHon1tr(a, n);
    cout << sum << "\n";
    NvienTangDanTuoi(a, n);
    return 0;
}

