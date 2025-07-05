#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef string bignum_str;
typedef vector<int> vi;

void input(bignum_str &number) {
    cin >> number;
}

void output(bignum_str number) {
    cout << number;
}

void input(vi &v) {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        v.push_back(str[i] - '0');
    }
}

void output(vi v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
}

void equal_length(bignum_str& a, bignum_str& b) {
    while (a.size() < b.size()) {
        a = '0' + a;
    }
    while (b.size() < a.size()) {
        b = '0' + b;
    }
}

int compare(bignum_str a, bignum_str b) {
    equal_length(a, b);
        if (a < b ) return -1;
        if (a > b) return 1;
        return 0;
}

void add_zero(vi& a, int sz) {
    reverse(a.begin(), a.end());
    while (a.size()<sz) a.push_back(0);
    reverse(a.begin(), a.end());
}

void change(vi& a, vi& b) {
    int sz = max(a.size(), b.size());
    add_zero(a, sz);
    add_zero(b, sz);
}

int compare(vi a, vi b) {
    change(a, b);
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

bignum_str add(bignum_str a, bignum_str b) {
    equal_length(a, b);

    int carry = 0;
    bignum_str res="";
    for (int i = a.size()-1; i >= 0; --i) {
        int d = (a[i] - '0') + (b[i] - '0') + carry;
        carry = d/10;
        res = (char)(d % 10 + '0') + res;
    }

    if (carry != 0) {
        res = '1' + res;
    }

    return res;
}

vi add(vi v1, vi v2) {
    change(v1, v2);
    vi res;
    int carry = 0;
    for (int i = v1.size() - 1; i >= 0; --i) {
        int x = v1[i] + v2[i] + carry;
        carry = x / 10;
        res.push_back(x % 10);
    }
    if (carry != 0) {
        res.push_back(1);
        
    }
    reverse(res.begin(), res.end());
    return res;
}

void del0(bignum_str& str) {
    while (str.size() >= 2 && str.front() == '0') {
            str.erase(str.begin());
    }
}

bignum_str tru(bignum_str str1, bignum_str str2) {
    equal_length(str1, str2);
    bool checkminus = false;
    int check = compare(str1, str2);
    if (check < 0) {
        swap(str1, str2);
        checkminus = true;
    }

    bignum_str res;
    int carry = 0;
    for (int i = str1.size() - 1; i >= 0; --i) {
        
        if (str1[i] < str2[i]) {
            int d = 10 + (str1[i] - '0') - (str2[i] - '0') - carry;
            carry = 1;
            res = (char)(d % 10 + '0') + res;
        }

        else {
            int d = (str1[i] - '0') - (str2[i] - '0') - carry;
            carry = 0;
            res = (char)(d % 10 + '0') + res;
        }
    }
    del0(res);
    if (checkminus != 0) res = '-' + res;
    return res;
}

void Fibonacci(int n) {
    bignum_str f0 = "0";
    bignum_str f1 = "1";
    
}


int main()
{
    bignum_str a,b;
    vi v1,v2;
  
    input(a);
    input(b);
   /* input(v1);
    input(v2);
    vi check = add(v1,v2);
    output(check);*/
    bignum_str check = tru(a, b);
    cout << check;
        return 0;
}