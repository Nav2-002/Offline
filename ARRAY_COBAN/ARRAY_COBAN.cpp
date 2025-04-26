#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void inbamax(int a[10000], int n) {
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for (int i=0; i < n; i++) {
        cin >> a[i];
    }
//max3<max2<max1
/*a[i-2]<a[i-1]*/
    for (int i=0; i < n; i++) {
        if (max<a[i]) {
            max3 = max2;
            max2 = max;
            max = a[i];
        }
        else if (max2<a[i] && a[i]<max) {
            max3=max2;
            max2 = a[i];
        }
        else if (max3 < a[i] && a[i]<max2) {
            max3 = a[i];
        }
    }
    cout << max << " " << max2 << " " << max3;
}


int main()
{
    int a[10000];
    int n;
    do {
        cin >> n;
        if (n < 3 || n > 10000) {
            cout << "Loi";
        }
    } while (n < 3 || n > 10000);
    inbamax(a,n);
    return 0;
}