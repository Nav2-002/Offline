#include<iostream>
#include <climits>
#include<cmath>
#include <cstring>
using namespace std;

typedef struct Hopsua{
    char ten[21],hsd[11];
    double trongluong;
}hop[10];

void Nhap(hop a[10], int n) {
    for (int i =0;i<n;i++) {
        cin>>a[i]->ten>>a[i]->trongluong>>a[i]->hsd;
    }
}

void Ten(hop a[10], int n) {
    cout<<"Danh sach cac hop sua: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]->ten;
    }
    cout<<endl;
}

int SoLuongHopSXTruoc2003(hop a[10], int n) {
    int b=0;
    char A[5];
    char B[5] = "2003";
    for (int i=0;i<n;i++) {
        A[0] = a[i]->hsd[6];
        A[1] = a[i]->hsd[7];
        A[2]= a[i]->hsd[8];
        A[3] = a[i]->hsd[9];
        if (strcmp(A, B) < 0) {
            b++;
        }
    }
    return b;
}

void HopSuaMoiNhat(hop a[10], int n) {
    char max[5] = "0000";
    char A[5];
    int k;
    for (int i=0;i<n;i++) {
        A[0] = a[i]->hsd[6];
        A[1] = a[i]->hsd[7];
        A[2]= a[i]->hsd[8];
        A[3] = a[i]->hsd[9];
        if (strcmp(max, A) <0) {
            strcpy(max, A);
            k = i;
        }
    }
    cout<<"Hop sua moi nhat: "<<a[k]->ten<<endl;
}

int main() {
    int n; cin>>n;
    hop a[10];
    Nhap(a, n) ;
    Ten(a, n) ;
    int check = SoLuongHopSXTruoc2003(a, n) ;
    cout<<" So luong hop sua SX truoc 2003 la: "<<check<<endl;
    HopSuaMoiNhat(a,n) ;
    return 0;
}
