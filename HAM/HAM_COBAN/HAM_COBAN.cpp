#include <iostream>
using namespace std;

void Fibonacci(int n) {
    int F0 = 0;
    int F1 = 1;
    n = n + F1 + F0;
    for (int i=0; i < n; i++) {
        cout << n;
        }
}


int main()
{
    //nhap n
    int n;
    do {
        cin >> n;
        if (n > 92 || n < 1) {
            "Nhap lai";
        }
    } while (n > 92 || n < 1);
    Fibonacci(n);



    return 0;
}
