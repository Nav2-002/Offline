#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    /*priority_queue <int, vector <int>, greater <int> > p;
    vector <int> a;
    p.push(5);
    p.push(3);
    p.push(4);
    
    a.push_back(1);
    a.push_back(4);
    for (auto item : a ) {
        cout << item;
    }*/
    /*multiset<int>s;
    multiset<int> ::iterator it;
    s.insert(5);
    s.insert(9);
    cout << *s.begin() << endl;
    s.insert(1);
    cout << *s.begin() << endl;
    
    it = s.find(5);
    if (it == s.end()) cout << "Khong co trong container" << endl;
    else cout << "Co trong container" << endl;

    s.insert(3);
    s.insert(10);
    s.insert(5);
    s.insert(4);

    it = s.lower_bound(4);
    if (it == s.end()) cout << "Ko co phan tu nao trong set ko nho hon 4"<<endl;
    else cout << "Co phan tu trong set nho hon 4"<<*it<<endl;

    it = s.lower_bound(10);
    if (it == s.end()) cout << "Ko co phan tu nao trong set ko nho hon 10"
  <<endl;
    else cout << "Co phan tu trong set nho hon 10"<<*it<<endl
        ;*/

    //it = s.upper_bound(4);
    //if (it == s.end()) cout << "Ko co phan tu nao trong set lon hon 4" << endl;
    //else cout << "Co phan tu trong set nho hon 4" << *it << endl;

    //for (auto item : s) {
    //    cout << item;
    //}

    map <char, int> m;
    map <char, int> :: iterator it;
    
    m['a'] = 1;
    m.insert(make_pair('b', 2));
    m.insert(pair<char, int>('c', 3));
    
    m['a'] = 5;
    cout << m['a'];
    m['d']++;
    cout << m['d'];

    it = m.find('c');

    cout << it->first<<endl
        ;
    cout << it->second<<endl
        ;


    
    return 0;
}

