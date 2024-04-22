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


Node* constructLL(vector<int>& arr) {
    Node* temp = new Node(arr[arr.size()-1]);
    // Node* temp = last;
    for(int i = arr.size()-2; i >= 0; i--){
        temp = new Node(arr[i], temp);
    }
    return temp;
}