#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct NStack {
    Node* top;
    long size;

    NStack() {
        top = nullptr;
        size = 0;
    }
};

Node* createNode(int x){
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

//size empty push pop top

void pushStack(NStack &S, int x) {
    Node* newNode = createNode(x);
    if (S.top == nullptr) {
        S.top = newNode;
        S.size++;
        return;
    }
    newNode->next = S.top;
    S.top = newNode;
    S.size++;
}

void popStack(NStack &S) {
    if (S.top == nullptr) return;
    Node* tam = S.top;
    S.top = tam->next;
    delete tam;
    S.size--;
}


void GetStack(Node* top) {
    Node* tam = top;
    while (tam != nullptr) {
        cout << tam->data;
        tam = tam->next;
    }
}

bool checkEmpty(NStack S) {
    return (S.size == 0);
}

int main()
{
    NStack S;
    pushStack(S, 3);
    pushStack(S, 4);
    pushStack(S, 6);

    popStack(S);
    cout << S.size;
    GetStack(S.top);
    return 0;
}
