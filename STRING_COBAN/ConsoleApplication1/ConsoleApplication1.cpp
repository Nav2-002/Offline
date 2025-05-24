#include <iostream>
#include <string>
#include <cctype>
using namespace std;

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
    //4 vien RRRR output 3
    //5 vien RGBRB output 0
}

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    TimSoDaToiThieu(a, n);
    return 0;
}

