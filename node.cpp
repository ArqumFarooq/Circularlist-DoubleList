#include<iostream>
class node{
	public:
		
	int data;
	node *next;
	node *previous;
	
	node(int x){
		data=x;
		next=previous=NULL;
	}
	
};
