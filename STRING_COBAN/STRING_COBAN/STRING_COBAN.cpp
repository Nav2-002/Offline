#include <iostream>
#include <cctype>
#include <string>
using namespace std;

#include <iostream>

void VietHoa(string a) {
    a[0] = toupper(a.front());
    cout << a;
}

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

void VasyaHello(string a) {
    size_t length = a.size();
    string b;
    
    
    size_t chec = b.find("hello");
    for (int i = 0; i < length; i++) {
        size_t check = b.find(a[i]);
        size_t check1 = b.find("hel");
        size_t check2 = a.find("l");
        if (check == string::npos) {
            if (check1 != string::npos) {
                if (check2 != string::npos) {
                    b += "l";
                }
            }
            b += a[i];

            //lllll
        }
    }
    if (chec != string::npos) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main()
{
    string a;
    //int n; cin >> n;
    cin >> a;
    VasyaHello(a);
}
