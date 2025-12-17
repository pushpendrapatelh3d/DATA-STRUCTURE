#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define Max 5
using namespace std;
//array implementation of queue

struct queue{
    int data[Max];
    int front,rear;
};

queue *p,Q1;

void init(){
    p=&Q1;
    p->front=p->rear=-1;
}

int full(){
    if(p->rear==Max-1)
    return 1;
    else 
    return 0;
}

int empty(){
    if(p->front==-1)
    return 1;
    else 
    return 0;
}

int EnQ(int x){
    if(full()==1)
    return -1;
    if(p->rear==-1)
    p->front=p->rear=0;
    else
    p->rear++;
    p->data[p->rear]=x;
    
}

void DeQ(){
    int x;
    if(empty()==1){
        cout<<"Queue Underflow\n";
        return;
    }
    x=p->data[p->front];
    if(p->front==p->rear)
    p->front = p->rear=-1;
    else
    p->front++;
    cout<<x<<" ";
    return ;

}

int main(){
    init();
    EnQ(10)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    EnQ(20)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    EnQ(30)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    EnQ(40)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    EnQ(50)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    EnQ(60)==-1?cout<<"Queue Overflow\n":cout<<"Element added \n";
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
}

