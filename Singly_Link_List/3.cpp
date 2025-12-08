#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;
// program to add a new node after a node after a node in a singly link list 

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
void add_after(int x){
    int n;
    cout<<"Entera value to add :";
    cin>>n;
    temp = first;
    while(temp ->data!=x){
        temp = temp -> next ;
    }
    if(temp == first ){
        temp = temp -> next ;
        p = new node;
        p -> data = n;
        p -> next = temp;
        first -> next = p;
    }else{
        ttemp = temp -> next ;
        p = new node;
        p -> data = n;
        p-> next = ttemp ;
        temp -> next = p;
    }
}

int main()
{
    int a;
	init();
	createfirst(10);
	addnode(20);
	addnode(30);
    addnode(40);
	addnode(50);
	addnode(60);
	disp();
    cout<<"Enter a data to add a node after that data :";
    cin>>a;
    cout<<"Before addition :"<<endl;
    disp();
    add_after(a);
    cout<<"Ater adddition :"<<endl;
    disp();


}
