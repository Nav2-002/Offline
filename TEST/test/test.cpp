#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void myfunction(int i) {
    cout << " " << i;
}
struct myclass {
    void operator() (int i) { cout << " " << i; }
}myobject;

int main()
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    cout << "myvector contains: ";
    for_each (myvector.begin(),myvector.end())
    return 0;
}

