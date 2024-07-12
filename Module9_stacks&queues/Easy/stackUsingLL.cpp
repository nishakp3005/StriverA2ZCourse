#include<bits/stdc++.h>
using namespace std;

void MyStack ::push(int x) 
{
    StackNode *newnode = new StackNode(x);
    if(top==nullptr) {
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
    
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
     if(top==nullptr) return -1;
    
    StackNode *temp = top->next;
    int a = top->data;
    top->next=nullptr;
    top=temp;
    return a;
}