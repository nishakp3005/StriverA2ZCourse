#include<bits/stdc++.h>
using namespace std;

void MyQueue:: push(int x)
{
    QueueNode* temp = new QueueNode(x);
        if(front==NULL) {
            front=temp;
            rear = temp;
        }
        else {
            rear->next = temp;
            rear = rear->next;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front==NULL) {
            return -1;
        }  
       QueueNode* temp = front;
        front=front->next;
        int ans = temp->data;
        temp->next=NULL;
        delete temp;
        if(front==NULL) {
            front=NULL,rear = NULL;
        }
        return ans;
}