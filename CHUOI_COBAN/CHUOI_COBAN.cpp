#include <cmath>
#include <climits>
#include <iostream>
#include <cstring>
#include <cctype>
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

void TangQuaPetya(char a[101],char b[101]) {
	int sum=0;
	
	for (int i=0;i<strlen(a);i++) {
	a[i]=(tolower(a[i]));
	b[i]=(tolower(b[i]));
	}
	
	int compare = strcmp(a,b);
		if (compare<0) {
			sum=-1;
		}
		else if (compare>0) {
			sum=1;
		}
	cout<<sum;
}

void PetyaDaBong(char a[10000]) {
	int count0=0;
	int count1=0;
	bool check = false;
	
	for (int i=0;i<strlen(a);i++) {
		//xet 0
		if (a[i] == '0') {
			count0++;
	 		if (count0<7) {
	 			if (a[i+1] == '1') {
	 				count0=0;
	 			}
	 		}
		}
		//xet 1
		if (a[i] == '1') {
			count1++;
	 		if (count1<7) {
	 			if (a[i+1] == '0') {
	 				count1=0;
	 			}
	 		}
		}
		if (count0==7||count1==7) {
		check = true;
		}
	}
	 
	//In YES/NO
	if (check == true) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}

int main()
{   
    char str[100];
    //cin.ignore(1) bo qua 1 buoc
	char str2[100];
    cin>>str;
    PetyaDaBong(str);
    return 0;
}
