#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SaoChepVaBinhPhuongSoChan(vector<int> v) {
    vector<int> v1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            v[i] *= 2;
        }
    }
    copy_if(v.begin(), v.end(), v1.begin(), [](int n) {return {n % 2 == 0});

}

int main()
{
    
    return 0;

}

