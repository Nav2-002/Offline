#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct NQueue {
    Node* front;
    Node* back;
    long size;

    NQueue() {
        size = 0;
        front = NULL;
        back = NULL;
    }
};

Node* makeNode(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushQueue(NQueue &Q,int x) {
    Node* newNode = makeNode(x);
    if (Q.front == NULL) {
        Q.front = newNode;
        Q.size++;
        return;
    }
    Q.back = newNode;
    Q.front->next = newNode;
    Q.size++;
}

void popQueue(NQueue &Q) {
    Node* tam = Q.front;
    if (tam->next == NULL) {
        Q.front = NULL;
        Q.back = NULL;
        delete tam;
        return;
    }
    if (tam->next->next == NULL) {
        Q.front = tam->next;
        Q.back = tam->next;
        delete tam;
        return;
    }

    Q.front = tam->next;
    Q.back = tam->next->next;
    delete tam;
}

void GetListQueue(NQueue Q) {
    for (Node* it = Q.front ; it->next != NULL ; it = it->next ) {
        cout << it->data;
    }
}

int main()
{
    NQueue Q;
    pushQueue(Q, 3);
    pushQueue(Q, 4);
    pushQueue(Q, 5);
    cout << Q.front->next->data;
    /*cout << Q.front->next->next->data;
    cout << Q.front->next->next->next->data;*/
 /*   popQueue(Q);*/
    /*GetListQueue(Q);*/
    return 0;
}

