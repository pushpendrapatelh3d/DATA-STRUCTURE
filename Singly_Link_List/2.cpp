#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;
// program of adding a new node before fist node in singly link list 

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}

void add_beforefirst(int x){
    p= new node;
    p-> data = x;
    p-> next = first;
    first = p;
}




int main()
{
	init();
	createfirst(10);
	addnode(20);
	addnode(30);
    addnode(40);
	addnode(50);
	addnode(60);
    cout<<"Before adding a node before first node :"<<endl;
	disp();
    add_beforefirst(100);
    cout<<"After adding a node before first node :"<<endl;
    disp();
}
