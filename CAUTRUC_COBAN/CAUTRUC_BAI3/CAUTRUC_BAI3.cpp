#include<iostream>
#include <climits>
#include<cmath>
using namespace std;

typedef struct Oxy {
    char tendiem[2];
    int x, y;
} diem[10];

void NhapDiem(diem a[10],int n){
    for (int i=0;i<n;i++) {
        cin>>a[i]->tendiem>>a[i]->x>>a[i]->y;
    }
    cout<<endl;
}

void DanhSachTen(diem a[10], int n) {
    cout<<"Danh sach cac diem co trong danh sach: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]->tendiem<<" ";
    }
    cout<<endl;
}

void DiemThuocPhanTuThuI(diem a[10], int n) {
    cout<<"Cac diem thuoc phan tu thu I: ";
    for (int i=0;i<n;i++) {
        if (a[i]->x>=0 && a[i]->y>=0) {
            cout<<a[i]->tendiem<<" ";
        }
    }
    cout<<endl;
}

void DiemCoTungDoLonNhat(diem a[10], int n) {
    int max = INT_MIN;
    int k;
    for (int i=0;i<n;i++) {
        if (max<a[i]->y) {
            max=a[i]->y;
            k = i;
        }
    }
    cout<<"Diem co tung do lon nhat la: "<<a[k]->tendiem<<endl;
}

int main() {
    int n; cin>>n;
    diem a[10];
    NhapDiem(a, n) ;
    DanhSachTen(a,n) ;
    DiemThuocPhanTuThuI(a,n) ;
    DiemCoTungDoLonNhat(a,n);
    return 0;
}
