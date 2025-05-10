#include <iostream>
#include <cstring>
using namespace std;

typedef struct ttDIEM {
    int x;
    int y;
}diem;
//nhap , xuat , tinh tong
void Nhap(ttDIEM &a) {   
    cin >> a.x;
    cin >> a.y;
}

void Xuat(ttDIEM a) {
    cout << a.x;
    cout << a.y;
}

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
        cout << a[i]->hoten<<"\n";
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
//a>b
bool SoSanhNam(nvien a[10], int n) {
    bool check=true;
    
    return check;
}

void SapXepTuoiNhanVien(nvien a[10], int n) {
    char tam[31];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (SoSanhNam(a, n) == true) {
                strcpy_s(tam, a[j]->hoten);
                strcpy_s(a[j]->hoten, a[j + 1]->hoten);
                strcpy_s(a[j + 1]->hoten, tam);
            }
        }
    }
    cout << "Danh sach nhan vien giam dan theo nam sinh: ";
    for (int i = 0; i < n; i++) {
        cout << a[i]->hoten;
    }
}

int main() {
    int n;
    cin >> n;
    nvien a[10];
    Nhapnvien(a, n);
    Xuatnvien(a, n);
    NvienLonHon40(a, n);
    int sum = SoNvienLuongNhieuHon1tr(a, n);
    cout << sum << "\n";
    SapXepTuoiNhanVien(a, n);
    return 0;
}