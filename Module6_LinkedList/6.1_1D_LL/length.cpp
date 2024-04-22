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

int length(Node *head)
{   
    Node* node = head;
    int count = 0;
	while(node != NULL){
        node = node->next;
        count++;
    }
    return count;
}