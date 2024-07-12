#include<bits/stdc++.h>
using namespace std;

void MyQueue :: push(int x)
{
    if(rear==100005){
        cout<<"queue full";
    }
    else{
        arr[rear]=x;
        rear++;
    }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
     if(front==rear){
            return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }    
}