#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

bool checkSoNguyenTo(int i) {
	bool check = true;
	if (i < 2) {
		check = false;
		return check;
	}
	if (i == 2) {
		return check;
	}
	for (int n = 2; n < sqrt(i) + 1; n++) {
		if (i % n == 0) {
			check = false;
			break;
		}
	}
	return check;
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

//index = it - v.begin()
int main()
{
	vector<int> v = { 1,2,3,4,5 };
	vector<int> v1 = { 2,4};
	bool check = all_of(v.begin(), v.end(), [](int i) {return i%2 != 0; });
	cout << check<<" ";
	bool check1 = any_of(v.begin(), v.end(), [](int i) {return i > 0; });
	cout << check1<<" ";
	bool check2 = none_of(v.begin(), v.end(), [](int i) {return i > 4; });
	cout << check2;
	return 0;
}

