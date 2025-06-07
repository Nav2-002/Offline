#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int DemSoPhanTuKhacNhauTrongSet(vector<int>v,set<int>s) {
    int sum = 0;
    for (auto item : v) {
        s.insert(item);
    }
    for (auto item : s) {
        sum++;
    }
    return sum;
}
void TruyVanTrongSet(vector<int> v, int tv) {
    set<int>s;
    for (auto item : v) s.insert(item);
    if (s.find(tv) == s.end()) cout << "NO";
    else cout << "YES";
}

void Lap(int L,vector<int>v) {
    set<int>s; 
    for (auto item : v) s.insert(item);
    int tv;
    for (int i = 0; i < L; i++) {
        cin >> tv;
        TruyVanTrongSet(v, tv);
    }
}

void LietKePhanTuKhacNhau(vector<int> v) {
    set<int> s;
    for (auto item : v) {
        if (s.count(item) == 0) {
            cout << item;
            s.insert(item);
        }
    }
}

void LietKePhanTuKhacNhauNhoDenLon(vector<int>v) {
    set<int>s;
    for (auto item : v) {
        s.insert(item);
    }
    for (auto item : s) {
        cout << item;
    }
}

void DemSoPhanTuKhacNhauTrongMap(vector <int>v) {
    map <int, int> m;
    for (auto item : v) {
        m[item] = 1;
    }
    cout << m.size();
}

void DemLanXuatHien(vector <int>v) {
    map <int, int> m;
    for (auto item : v) {
        m[item]++;
    }
    for (auto item : m) {
        cout << item.second << " ";
    }
}

void DemLanXuatHienVaGiaTri(vector <int>v) {
    map <int, int> m;
    for (auto item : v) {
        m[item]++;
    }
    for (auto item : m) {
        cout << item.first << "=" << item.second << " ";
    }
}

void DemLanXuatHienCuaKyTu(string str) {
    map <char, int> m;
    for (auto item : str) {
        m[item]++;
    }
    for (auto item : m) {
        cout <<item.second << " ";
    }
}

void DemLanXuatHienCuaKyTuVaKyTu(string str) {
    map <char, int> m;
    for (auto item : str) {
        m[item]++;
    }
    for (auto item : m) {
        cout << item.first << "=" << item.second << " ";
    }
}

void TapGiaoCua

int main()
{
    vector<int> v = { 9,2,3,6,7,8,8,8 };
    vector<int> v1 = { 1,2,3,4,4,4,5,6 };
    string str = "ABCDABC";
    DemLanXuatHienCuaKyTu(str);

    return 0;
}

