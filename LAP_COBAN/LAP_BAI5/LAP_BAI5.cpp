#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, a[100000],tam,tam2;
    int min = INT_MAX;
    int secondmin = INT_MAX;
    do {
        cin >> n;
        if (n > 100000 || n < 1) {
            cout << "Vui long nhap lai";
        }

    } while (n > 100000 || n < 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            secondmin = min;
            min = a[i];
            tam = i;
        }
        else if (secondmin > a[i] && min != a[i]) {
            secondmin = a[i];
        }
    }
    cout << min << "\n" << secondmin;
    return 0;
}
