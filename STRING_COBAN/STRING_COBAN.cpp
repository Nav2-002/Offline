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

void Pangram(string a,int n) {
	if (n<26) {
		cout<<"NO";
	}
	else {
		for (int i=0;i<n;i++) {
			a[i] = tolower(a[i]);
		}
	string b;
		for (int i=0;i<n;i++) {
			size_t check = b.find_first_of(a[i]);
				if (check==string::npos) {
					b += a[i];
				}
		}
	size_t check1 = b.size();
		if (check1==26) {
			cout<<"YES";
		}	
		else {
			cout<<"NO";
		}
	}
}

void Noel(string a,string b,string c) {
	int suma = 0;
	int sumb = 0;
	int sumc = 0;
	size_t Sizea = a.size();
	size_t Sizeb = b.size();
	size_t Sizec = c.size();
	if (Sizec > Sizea + Sizeb) {
		cout<<"NO";
	}
	else {
		for (int i=0;i<Sizea;i++) {
			suma += a[i];
		}
		for (int i=0;i<Sizeb;i++) {
			sumb+=b[i];
		} 
		for (int i=0;i<Sizec;i++) {
			sumc +=c[i];
		}
	}
	
	if (sumc == suma + sumb) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}

void So1LienKe(string a,int n) {
    int sum = 0;
    for (int j = 0;j<n;j++) {
    	sum=0;
    	cin>>a;
    	size_t checkdau = a.find_first_of("1");
    	size_t checkcuoi = a.find_last_of("1");
    	for (int i = checkdau+1;i<checkcuoi;i++) {
    		if (a[checkdau] == '1' && a[i]=='0' &&a[checkcuoi]=='1') {
    			sum++;
			}
			else if (checkdau==string::npos||checkcuoi==string::npos) {
				sum = 0; break;
			}
		}
		cout<<sum;
	}
	
}

//14

void TongSoChan(string a,int n) {
	int sum=0;
	for ( int i=0;i<n;i++) {
		if (a[i]%2==0) {
			sum++;
		}
	}
	cout<<sum;
}

//16
void CheckChuoiGiongNhau(string a,string b,string c) {
	size_t Size = a.size();
	int check = true;
	for (int i=0;i<Size;i++) {
		if (c[i]== b[i] || c[i] == a[i]) check = true;
		else check = false; break;
	}
	if (check == true) cout<<"YES";
	else cout<<"NO";
}

void CheckaBangb(string a,int n) {
	int counta=0;
	int countb=0;
	for (int i=0;i<n;i++) {
		if (a[i]=='a') counta++;
		else countb++;
	}
	for (int i=0;i<n;i++) {
		if (counta == countb) {
			cout<<"0";
			cout<<a[i];
		}
		
		else if (counta>countb) {
			cout<<n-counta;
			if (a[i] == 'a') {
				a[i] = 'b'; 
				cout<<a[i];
				countb++;
				if (counta==countb) break;
			}
		} 
		
		else if (countb>counta) {
			cout<<n-countb;
			if (a[i]=='b') {
				a[i] = 'a';
				cout<<a[i];
				counta++;
				if (counta==countb) break;
			}
		}
		
		else if (counta == 0) {
			cout<<n/2;
			if (a[i]=='b') {
				a[i] = 'a';
				cout<<a[i];
				counta++;
				if (counta==countb) break;
			}
		}
		else if (countb==0) {
			cout<<n/2; 
			if (a[i]=='a') {
				a[i] = 'b';
				cout<<a[i];
				countb++;
				if (counta==countb) break;
			}
		}
	}
}

int main() 
{
    string a;//,b,c;
    int n; cin >> n;
    cin>>a;//>>b>>c;
    CheckaBangb(a,n);
    
}
