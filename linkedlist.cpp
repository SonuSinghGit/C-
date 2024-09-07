 #include<iostream>
 using namespace std;
 struct node
 { 
 int data;
 struct node *next;
 };
 struct node *head=null;
 void addlast(struct node **head,int val)
 {
 	struct node *newnode=malloc(sizeof(struct));
 	newnode->data=val;
 	newnode->next=null;
 	if(*head==null)
 	*head=newnode;
 	return 0;
 }
