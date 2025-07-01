#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cctype>
using namespace std;

void Bai1(long long n) {
    int test1 = n % 100;
    int X = 99 - test1;
    cout << X;
}

void Bai2(long long m) {
    long long n;
    if (m == 0) {
        n = 0;
        cout << n;
        return;
    }
    n = 2 + ((m + 1) * m) / 2;
    cout << n;
}
void Bai3(string str) {
    ifstream inFile("input.txt");
    inFile >> str;
    inFile.close();
    bool check = 0;
    ofstream outFile("output.txt");

    for (int i = 0; i < str.size()-2; i++) {
        if (tolower(str[i]) == tolower(str[i + 1]) && tolower(str[i]) == tolower(str[i + 2])) {
            outFile << i + 1 << " " << str[i] << str[i + 1] << str[i + 2] << endl;
            check = 1;
        }
    }
    if (check == 0) outFile << check;
    outFile.close();
}

void Bai4(string str) {
	ifstream inFile("input.txt");
	getline(inFile,str);
    bool check = 0;
    int Size = 0;
	inFile.close();
	ofstream outFile("output.txt");
    for (int i = 0; i < str.size(); i++) {
        check = isalnum(str[i]);
        if (check == 1) {
            Size++;
        }
	}
	outFile << Size << endl;
    for (int i = 0; i < str.size(); i++) {
		check = isalnum(str[i]);
        if (check == 1) {
            outFile << str[i];
		}
	}
	outFile.close();
}

void Bai5(long long n) {
	ifstream inFile("input.txt");
	inFile >> n;
	inFile.close();
	ofstream outFile("output.txt");
    long long thung=1;
    long long nuoc=1;
    while (nuoc < n) {
        thung++;
        nuoc += thung;
    }
	outFile << thung << " " << nuoc;
	outFile.close();
}

void Bai6(long long n) {
    long long ngay = 1;
    long long a;
}

int main()
{
    /*string str = "1,.Tin @! Hoc:; tre #&%2022 ";
	long long n = 15;*/
    ifstream inFile("input.txt");
    string S;
    inFile >> S;
    inFile.close();
    // if (S.size()>1000){
    //     cout<<"qua nhieu ki tu";
    //     return 0;
    // }
    int dem = 0;
    ofstream outFile("output.txt");

    for (int i = 0; i < S.size(); i++) {

        if (tolower(S[i]) == tolower(S[i + 1]) && tolower(S[i + 1]) == tolower(S[i + 2])) {
            outFile << i + 1 << " " << S[i] << S[i + 1] << S[i + 2] << "\n";
            dem++;
        }
    }
    if (dem == 0) {
        outFile << '0';
    }
    outFile.close();



    return 0;
}