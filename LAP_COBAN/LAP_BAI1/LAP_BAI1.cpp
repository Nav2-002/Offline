#include <iostream>
using namespace  std;

int main()
{
    int n, a[100];
    int x = 0;
    int y = 0;
    do {
        cin >> n;
        if (n > 100 || n < 1) {
            cout << "Nhap lai";
        }
    } while (n > 100 || n < 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
       
    }

    return 0;
}