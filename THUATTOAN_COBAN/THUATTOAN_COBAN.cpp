#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

bool checkSoNguyenTo(int i) {
	if (i < 2) {
		return 0;
	}
	for (int n = 2; n <= sqrt(i); n++) {
		if (i % n == 0) {
			return 0;
			break;
		}
	}
	return 1;
}

void SaoChepVaBinhPhuongSoChan(vector<int> v1) {
    vector<int> v2;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] % 2 == 0) {
            v1[i] *= 2;
        }
    }
    copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int n) {return n % 2 == 0; });
    for (auto item : v2) cout<<item;
}

//COUNT 
void DemSoChan(vector<int> v) {
	int dem = count_if(v.begin(), v.end(), [](int i) {
		return i % 2 == 0;
		});
	cout << dem;
}

void DemDoDaiChuoi(int i, vector<string> v) {
	int dem = count_if(v.begin(), v.end(), [i](string str) {
		return (int)(str.size()) == i;
		});
	cout << dem;
}

void DemSoNguyenTo(vector<int> v) {
	int dem = count_if(v.begin(), v.end(), checkSoNguyenTo);
	cout << dem;
}

void DemSoChuoiChuaKyTuDacBiet(vector<string> v) {
	int dem = count_if(v.begin(), v.end(), [](string str) {
		bool check = false;
		for (int i = 0; i < str.size(); i++) {
			if (isalnum(str[i]) == 0) check = true;
		}
		return check;
		});
	cout << dem;
}

void DemPhanTuTrongKhoang(vector<int> v, int a, int b) {
	int dem = count_if(v.begin(), v.end(), [a, b](int i) {
		return (i >= a && i <= b);
		});
	cout << dem;
}

void DemChuoiCoDoDaiLonHonTrungBinh(vector<string> v) {
	int len = 0;
	for_each(v.begin(), v.end(), [&len](string i) {
		len += i.size();
		});
	double lenTB = (double)len / v.size();
	int dem = count_if(v.begin(), v.end(), [lenTB](string i) {
		return i.size() > lenTB;
		});
	cout << dem;
}

//FIND
void TimSoTrongVector(vector<int> v, int i) {
	vector<int>::iterator it = find(v.begin(), v.end(), i);
	if (it != v.end()) cout << it - v.begin();
	else cout << "Not found";
}

void TimSoChanDauTien(vector<int> v) {
	vector<int>::iterator it = find_if(v.begin(), v.end(), [](int i) {
		return i % 2 == 0;
		});
	if (it != v.end()) cout << "Value: " << *it << " Index: " << it - v.begin();
	else cout << "No even number found";
}

void TimDayConCuoiCung(vector<int> v,vector<int> v1) {
	vector<int>::iterator it = find_end(v.begin(), v.end(), v1.begin(), v1.end());
	cout << it - v.begin();
}

void TimKyTutrongChuoi(vector<string> v1, char c) {
	c = tolower(c);
	auto it = find_if(v1.begin(), v1.end(), [c](string str) {
		string v2(str.size(),'b');
		transform(str.begin(), str.end(), v2.begin(), [](char c1) {
				return tolower(c1);
			});	
		for (auto item : v2) return item == c;
	});
	if (it != v1.end()) cout << "String: " <<*it<<", Index: "<<it - v1.begin();
	/*if (it != v1.end()) cout << "String: " *it << ", Index: " << it - v1.begin();*/
}





//THAY DOI PHAN TU
void copyNdoublevalue(vector<int> v1) {
	vector<int> v2(v1.size());
	copy_if(v1.begin(), v1.end(), v2.begin(), checkSoNguyenTo);
	auto it = remove(v2.begin(), v2.end(), 0);
	v2.erase(it, v2.end());
	for (auto item : v2) {
		item *= 2; cout <<item<<" ";
	}
}

void moveWdieukien(vector<string> v1) {
	vector<string> v2(v1.size());
	copy_if(v1.begin(), v1.end(), v2.begin(), [](string str) {
		return str.size() > 5;
		});
	
	auto new_end=remove_if(v1.begin(), v1.end(), [](string str) {
		return str.size() > 5;
		});
	v1.erase(new_end, v1.end());
	cout << "New: ";
	for (auto item : v2) {
		cout << item << " ";
	}
	cout << "Original: ";
	for (auto item : v1) {
		cout << item << " ";
	}
}

void dienGiaTriXenKe(int n) {
	vector<int> v1(n);
}

//index = it - v.begin()
int main()
{
	vector<string> vstr = { "aa","bbbbb","CCccccc","dddddd" };
	vector<int> vi = { 2,3,4,5,6,7 };
	bool check = checkSoNguyenTo(2);
	cout << "Is prime: " << check << endl;
	return 0;
}