// FILETEXT_COBAN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
//crtl k c = dong note
//crtl k u = mo note
void GhiFile() {
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Xin chao, day la file text!\n";
        outFile << "Dong thu hai.\n";
        outFile.close();
    }
    else {
        cout << "ko the mo file";
    }
}

void DocFile() {
    ifstream inFile("input.txt");
    if (inFile.is_open())  {
        string line;
        int a, b, c;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
}

int DemSoDongTrongFile() {
    int sum = 0;
    ifstream inFile("input.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            sum++;
        }
        inFile.close();
    }
    return sum;
}

void BoDongTrong() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (inFile >> line) {
            outFile << line << endl;
        }
        inFile.close();
        outFile.close();
    }
}

void InThemSoThuTuVaoDauDong() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int k = 1;
    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (getline(inFile,line)) {
            if (line.size() == 0) {
                continue;
            }
            outFile << k << ". " << line << endl;
            k++;
        }
        inFile.close();
        outFile.close();
    }
}

void XoaKhoangTrangTrongDong() { 
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            //Xoa dau 
            size_t checkdau = line.find_first_not_of(" ");
            line.erase(0, checkdau);
            //Xoa cuoi
            size_t checkcuoi = line.find_last_not_of(" ");
            int k = line.size();
            line.erase(checkcuoi+1, k - checkcuoi);
            //Xoa giua
            k = line.size();
            int tam = 0;
            while (tam < k) {
             
                if (line[tam] != ' ') {
                    tam++;
                    continue;
                }
               
                size_t checkgiua = tam + 1;
             
                while (line[checkgiua] == ' ') {
                    line.erase(checkgiua, 1);
                    tam = 0;
                   
                }
                k = line.size();
                
                tam++;
                
            }
            cout << line;
            //outFile << line << endl;
        }
            inFile.close();
            outFile.close();
        }
    }


int main()
{
    XoaKhoangTrangTrongDong();
}

