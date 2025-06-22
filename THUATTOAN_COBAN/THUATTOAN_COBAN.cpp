#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SaoChepVaBinhPhuongSoChan(vector<int> v1) {
    vector<int> v2;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] % 2 == 0) {
            v1[i] *= 2;
        }
    }
    copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int n) {return n % 2 == 0; });
    for (auto item : v2) cout<<item;
}

int main()
{
    vector<int> v1 = {1,2,3,4,5,6};
    vector<int> v2;
    SaoChepVaBinhPhuongSoChan(v1);
    return 0;

}

