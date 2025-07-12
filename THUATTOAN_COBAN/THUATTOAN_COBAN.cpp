#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cctype>
#include <cmath>
#include <unordered_map>
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

bool myfunction(int i, int j) { return (i < j); }

typedef struct Hocsinh {
	string ten;
	int tuoi;
	double TB;
};

bool SortHs(Hocsinh i,Hocsinh j) {
	if (i.TB != j.TB) return (i.TB > j.TB);
	if (i.tuoi!=j.tuoi) return (i.tuoi < j.tuoi);
	return (i.ten < j.ten);
}

bool TanSuat(pair<int,int> i,pair<int,int> j) {
	if (i.second != j.second) return (i.second > j.second);
	return (i.first < j.first);
}

void C1SortTanSuat(vector<int> v) {
	//unodered_map<int,int> um;
	vector<pair<int, int>> vp;
	int tam = 0;
	for (auto item : v) {
		tam = (int)count(v.begin(), v.end(), item);
		vp.push_back(make_pair(item,tam));
	}
	sort(vp.begin(), vp.end(), TanSuat);
	for (auto item : vp) cout << item.first << " ";
}

//void C2SortTanSuat(vector<int> v) {
//	unordered_map<int, int> um;
//	for (auto item : v) {
//		um[item]++;
//	}
//	sort(um.begin(), um.end(), TanSuat);
//	for (auto item : um) cout << item.first << " ";
//}

bool ChuoiTang(string i, string j) {
	if (i.size() != j.size()) return (i.size() < j.size());
	else {
		for (int k = 0; k < i.size(); k++) {
			if (i[k] != j[k]) {
				return (i[k] < j[k]);
				break;
			}
		}
	}
}

void SortChuoiTang(vector<string> vstr) {
	sort(vstr.begin(), vstr.end(), Chuoi);
	for (auto item : vstr) cout << item<<" ";
}

bool Min(int i, int j) {
	return (i < j);
}

void SortMin(vector<int> v) {
	sort(v.begin(), v.end(), Min);
	cout << v[0];
}

typedef struct Diem {
	string ten;
	int x, y;
};

bool SortViTri(Diem i, Diem j) {
	int tam1 = pow(i.x, 2) + pow(i.y, 2);
	int tam2 = pow(j.x, 2) + pow(j.y, 2);
	return (tam1 < tam2);
}

void SortViTriGanGocToaDo(vector<Diem> v) {
	sort(v.begin(), v.end(), SortViTri);
	for (auto item : v) cout << item.ten << " ";
}

bool PhanSo(pair<int, int> i, pair<int, int> j) {
	return (i.first * j.second < i.second * j.first);
}

void SortPhanSo(vector<pair<int, int>> vp) {
	sort(vp.begin(), vp.end(), PhanSo);
	for (auto item : vp) cout << item.first << "/" << item.second<<" ";
}

bool ChuoiGiam(string i, string j) {
	if (i.size() != j.size()) return (i.size() > j.size());
	else {
		for (int k = 0; k < i.size(); k++) {
			if (i[k] != j[k]) {
				return (i[k] < j[k]);
				break;
			}
		}
	}
}

void SortChuoiGiam(vector<string> vstr) {
	sort(vstr.begin(), vstr.end(), ChuoiGiam);
	for (auto item : vstr) cout << item << " ";
}

void BubbleSort(vector<int> &v) {
	bool swapped = false;
	do {
		swapped = false;
		for (int i = 1; i < v.size(); i++) {
			if (v[i] < v[i - 1]) {
				swap(v[i], v[i - 1]);
				swapped = true;
			}
		}
	} while (swapped==true);
	
}

//index = it - v.begin()
int main()
{
	vector<Hocsinh> hs = { {"a",10,8.0},{"b",20,10.0} ,{"c",30,9.0} ,{"d",25,10.0}, {"A",25,10.0} };
	vector<int> v = {5,5,55,5,1,2,2,2,3,3,4,4,4,4 };
	vector<Diem> vd = { {"a",1,1},{"b",2,3},{"c",1,2} };
	vector<string> vstr = { "ac","ab","abc" };
	vector<pair<int, int>> vp = { {1,2},{2,3},{1,3} };
	vector<int> v2 = { 4,5,6,1,22,4 };
	/*C2SortTanSuat(v);*/
	BubbleSort(v2);
	for (auto item : v2) cout << item;

	return 0;
}