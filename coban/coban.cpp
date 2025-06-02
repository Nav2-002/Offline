// coban.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

//vector<int> v;
//vector<int>::iterator it;
//vector <int>::reverse_iterator rit;
//int i;
//for (i = 1; i <= 5; i++) v.push_back(i);
//cout << v.front() << endl;
//cout << v.back() << endl;
//
//cout << v.size() << endl;
//
//v.push_back(9);
//cout << v.size() << endl;
//
//v.clear();
//cout << v.empty() << endl;
//
//for (int i = 1; i <= 5; i++) v.push_back(i);
//v.pop_back();
//cout << v.size() << endl;
//
//v.erase(v.begin() + 1);
//v.erase(v.begin(), v.begin() + 2);
//v.insert(v.begin(), 100);
//v.insert(v.end(), 5);
//
//for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
//cout << endl;
//
//for (it = v.begin(); it != v.end(); it++) cout << *it << " ";
//cout << endl;
//
//for (rit = v.rbegin(); rit != v.rend(); rit++) cout << *rit << " ";

void InNguoc(vector<int> a, int n) {
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    vector<int>::reverse_iterator b;
    for (b = a.rbegin(); b != a.rend(); b++) cout << *b;
    
}

//nhap mot mang tim 3 so lon nhat
void Tim3Max(vector<int>a, int n) {
    int x;
    //nhap gia tri
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    int tam;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                tam = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tam;
            }
        }
    }
    vector<int>::reverse_iterator b;
    for (b = a.rbegin(); b < a.rbegin() + 3; b++) cout << *b;
}

void SlidingWindow(vector<int>a, int n, int k) {
    int x, y;
    int tam = 0;
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    /*slide window
    vd n = 5 k = 2
    a = 1 2 3 4 5
    for (k->n) 
    sum+=a[i]-a[i-k]
    */
    for (int i = 0; i <= n-k; i++) {
        sum = 0;
        for (int j = 0; j < k; j++) {
            sum += a[i + j]; 
            if (sum >= tam) { 
                tam = sum;
                y = i;   
            }
            
        }
    }
    cout << tam<<endl;
    for (int i = y; i < y + k; i++) {
        cout << a[i]<<" ";
    }
}

int main()
{   
    vector<int> a;
    int n,k;
    cin >> n>>k;
    SlidingWindow(a, n, k);

    return 0;
}

