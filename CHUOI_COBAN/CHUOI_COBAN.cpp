#include <cmath>
#include <climits>
#include <iostream>
using namespace std;

int DoDai(char str[1000]) {
    int count = 0;
    int i=0;
    do {
        count++;
        i++;
    } while (str[i] != '\0');
    return count;
}

int DemKiTuThuong(char str[1000]) {
    int count = 0;
    int dodai = DoDai(str);
    for (int i = 0; i <= dodai;i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    return count;
}

void BienThanhKiTuThuong(char str[1000]) {
    int dodai = DoDai(str);
    for (int i = 0; i <= dodai; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        cout << str[i];
    }
}

void BienThanhKiTuHoa(char str[1000]) {
    int dodai = DoDai(str);
    for (int i = 0; i <= dodai; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        cout << str[i];
    }
}

void InMotKiTuThuong(char str[2]) {
    if (str[0] >= 'A' && str[0] <= 'Z') {
        str[0] += 'a' - 'A';
    }
    cout << str[0];
}

void InMotKiTuHoa(char str[2]) {
    if (str[0] >= 'A' && str[0] <= 'Z') {
        str[0] -= 'a' - 'A';
    }
    cout << str[0];
}


bool KiemTraKieuDuLieu(char str[2]) {
    bool check = false;
    if (str[0] >= 'A' && str[0] <= 'z') {
        check = true;
    }
    return check;
}

bool KiemTraChuThuong(char str[2]) {
    bool check = false;
    if (str[0] >= 'a' && str[0] <= 'z') {
        check = true;
    }
    return check;
}

bool KiemTraChuHoa(char str[2]) {
    bool check = false;
    if (str[0] >= 'A' && str[0] <= 'Z') {
        check = true;
    }
    return check;
}

bool KiemTraSo(char str[2]) {
    bool check = false;
    if (str[0] >= '0' && str[0] <= '9') {
        check = true;
    }
    return check;
}

bool KiemTraChuSo(char str[2]) {
    bool check = false;
    if (str[0] >= '0' && str[0] <= '9' || str[0]>='A' && str[0]<='z') {
        check = true;
    }
    return check;
}

int Zoma(char str[106], int n) {
    /*CACH 1: cin >> n;
    return n++;*/
    //CACH 2
    int left = 0;
    int right = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if (str[i] == 'L') {
            left++;
        }
        else if (str[i] == 'R') {
            right++;
        }
    }
    int socach = left + right + 1;
    return socach;
}

void Polycarp(char str[56], int n) {
    int a = 1;
    for (int i = 0; i < n; i+=a) {
        cout << str[i];
        a++;
    }
}

void VietTat(char str[100]) {
    int dodai = DoDai(str) - 2;
    if (dodai > 8) {
        cout << str[0] << dodai << str[dodai+1];
    }
    else {
        for (int i = 0; i < dodai + 2; i++) {
            cout << str[i];
        }
    }
}
int main()
{   
    char str[1000];
    //cin.ignore(1) bo qua 1 buoc
    cin.getline(str, 1000);
    VietTat(str);
    return 0;
}
