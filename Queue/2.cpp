#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


struct Lqueue{
    int data;
    Lqueue *next;
};

Lqueue *front,*rear,*temp;

void init(){
    front=rear=temp=NULL;
}

void EnQ(int x){
    temp = new Lqueue;
    if(temp==NULL)
    return ;
    temp->data = x;
    temp -> next = NULL;
    if(front == NULL && rear == NULL)
    front = rear = temp;
    else{
        rear -> next = temp;
        rear = temp;
    }
}

int DeQ(){
    int x;
    if(front == NULL){
    cout<<"Queue underflow";
    return -1;
    }
    x = front -> data;
    temp = front;
    if(front == rear)
    front = rear = NULL;
    else
    front = front -> next;
    temp -> next = NULL;
    delete temp;
    return x;

}

int main(){
    init();
    EnQ(10);
    EnQ(20);
    EnQ(30);
    EnQ(40);
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
}



