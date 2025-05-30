#include <iostream>
#include <cctype>
#include <string>
using namespace std;

#include <iostream>

/*void VietHoa(string a) {
    a.front() = toupper(a.front());
    cout << a;
}*/

int TimSoDaToiThieu(string a, int n) {
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i + 1]) {
            sum++;
        }
    }
    return sum;
}

void XacDinhNamNu(string a) {
    size_t str = a.size();
    string b;
    for (int i = 0; i < str; i++) {
        size_t check = b.find(a[i]);
        if (check == string::npos) {
            b += a[i];
        }
    }
    size_t str1 = b.size();
    if (str1 % 2 == 0) {
        cout << "CHAT WITH HER";
    }
    else {
        cout << "IGNORE HIM";
    }
}

/*void VasyaHello(string a) {
    size_t length = a.size();
    string b;
    
    size_t chec = b.find("hello");
    for (int i = 0; i < length; i++) {
        size_t check = b.find(a[i]);
        size_t check1 = b.find("hel");
        size_t check2 = a.find("l");
        if (check == string::npos) {
            if (check1 != string::npos && check2 != string::npos) {
                    b += "l";
            }
            b += a[i];

            //lllll
        }
    }
    if (chec == string::npos) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}*/

void DichNgonNgu(string a, string b){
	size_t Size = a.size();
	int j = Size - 1;
	bool check = true;
	for (int i=0;i<Size;i++) {
		cout<<a[i]<<b[j]<<" ";
		if (a[i] == b[j]) {
			check = true;
		}
		else{
			check = false;
		}
		j--;
	}
	if (check == true) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
 
void SoSanhHoaThuong(string a) {
	size_t Size = a.size();
	int checkHoa = 0;
	int checkThuong = 0;
	for (int i=0;i<Size;i++) {
		if (a[i] >= 'A' && a[i]<='Z') {
			checkHoa++;
		}
		else if (a[i] >= 'a' && a[i]<= 'z') {
			checkThuong++;
		}
	}
	for (int i=0;i<Size;i++) {
		if (checkHoa > checkThuong) {
			a[i] = toupper(a[i]);
		}
		else {
			a[i] = tolower(a[i]);
		}
		cout<<a[i];
	}	
}

void AntonDanik(string a, int n) {
	int Anton = 0;
	int Danik = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == 'A') {
			Anton++;
		}
		else {
			Danik++;
		}
	}
	if (Anton<Danik) {
		cout<<"Danik";
	}
	else if (Anton>Danik) {
		cout<<"Anton";
	}
	else {
		cout<<"Friendship";
	}
} 

void Hulk(int n) {
	string str1 = "I hate it";
	string str2 = "I love it";
	int A = 1;
	for (int i = 1;i<=n;i++) {
		if (A%2!=0) {
			cout<<str1<<" ";
		}
		else {
			cout<<str2<<" ";
		}
		A++;
	}
}

void Shapur(string a,string b) {
	size_t Size = a.size();
	for (int i=0;i<Size;i++) {
		if (a[i] == b[i]) {
			cout<<"0";
		}
		else {
			cout<<"1";
		}
	}
}

int AntonChuCai(string a) {
	size_t Size = a.size();
	string b;
	int sum=0;
	for (int i=0;i<Size;i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			size_t check = b.find_first_of(a[i]);
			if (check == string::npos) {
				b += a[i];
				sum++;
			}
		}
	}
	return sum;
}



int main() 
{
    string a;//,b;
    //int n; cin >> n;
    getline(cin,a);//>>b;
    int sum = AntonChuCai(a);
    cout<<sum;
    
}
