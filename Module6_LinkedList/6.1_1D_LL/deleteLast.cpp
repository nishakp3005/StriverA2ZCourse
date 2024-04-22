#include<bits/stdc++.h>
using namespace std;

// Definition of linked list
class Node {
    public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};

Node *deleteLast(Node *list){
    Node* prev, *curr;
    curr = list;
    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    return list;
}