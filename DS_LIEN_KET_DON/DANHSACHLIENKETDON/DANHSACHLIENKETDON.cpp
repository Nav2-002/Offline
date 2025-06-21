#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct SLinkedList {
    Node* head;
    long size;
    
    SLinkedList() {
        head = NULL;
        size = 0;
    }
};

//void intit(SLinkedList) {
//
//}
//Ham tao moi node
Node* makeNode(int x) { 
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

void insertFirst(Node*& head, int x) {
    Node* newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void eraseFirst(Node*& head) {
    if (head == nullptr) return;
    Node* old = head;
    head = head->next;
    delete old;
}

void insertLast(Node*& head, int x) {
    Node* newNode = makeNode(x);
    Node* tam=head;
    while (tam->next != nullptr) tam = tam->next;
    tam->next = newNode;
}

void eraseLast(Node*& head) {
    Node* tam = head;
    if (head == nullptr) return;
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
        while (tam->next->next != nullptr) {
            tam = tam->next;
        }
        tam->next = nullptr;
        delete tam->next;
}

void insertGiua(Node*& head, int x, int it) {
    Node* newNode = makeNode(x);
    Node* tam = head;
    if (head == nullptr) {
        insertFirst(head, x);
        return;
    }
    
    newNode->next = tam->next;
    tam->next = newNode;
}

void eraseGiua(Node*& head, int it) {
    Node* tam = head; int check=0;
    if (head->next == nullptr) {
        delete head;
        return;
    }
    for (int i = 1; i < it && tam->next != nullptr; i++) {
        tam = tam->next;
    }

    if (tam->next == nullptr);
}

void XuatDS(Node* head) {
    for (Node* p = head; p != nullptr; p = p->next) {
        cout << p->data <<" ";
    }
}


int main()
{
    SLinkedList S;
    insertFirst(S.head, 3);
    /*insertFirst(S.head, 666);
    insertLast(S.head, 22);
    insertGiua(S.head, 1, 1);
    insertGiua(S.head, 4, 2);*/
    eraseLast(S.head);
    XuatDS(S.head);

    return 0;
}
