#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void Fibonacci(int n) {
    int F0 = 0;
    int F1 = 1;
    int sum = 0;
    cout << F0 << " " << F1 << " ";
    for (int i=2; i < n; i++) {
        sum = F1 + F0;
        F0 = F1;
        F1 = sum;
        cout << sum << " ";
        }
}

bool checkFibonacci(int n) {
    int F0 = 0;
    int F1 = 1;
    int sum = 0;
    int i = 0;
    while (i<=n) {
        sum = F1 + F0;
        F0 = F1;
        F1 = sum;
        if (n == sum) {
            return true;
        }
        i++;
    }
}

bool checkSochinhphuong(int n) {
    double sum = sqrt(n);
    double a = round(sum);
    if (round(sum) * round(sum) == n) {
    return true;
    }
}

int tinhtonguoc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int demuoc(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
        return count;
}

bool sohoanhao(long long n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return true;
    }
}

bool checkminus(int a[100],int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return false;
        }
    }
    return true;
}

bool checkdoixung(int a[100], int n) {
    for (int i = 0; i <= (n / 2); i++) {
        if (a[i] != a[n - (1 + i)]) {
            return false;
            }
        }
    return true;
}

int main() {
    return 0;
}