#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, a[100];
	bool check = true;
	do {
		cin >> n;
		if (n > 100 || n < 1) {
			cout << "Vui long nhap lai";
		}
	} while (n > 100 || n < 1);

	
	do {
		check = true;
		cin >> a[0];
		cout << a[0];
		for (int i = 1; i < n; i++) {
			cin >> a[i];
			if (a[i] > a[i-1]) {
				cout << a[i];
			}
			else {
				cout << a[i];
				check = false;
			}
		}
		if (check == false) {
			cout << "Nhap lai:\n";
		}
	} while (check == false);
	
	return 0;
}