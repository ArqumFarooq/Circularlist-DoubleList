#include<iostream>
#include"circulardub.h"
using namespace std;
circulardub::circulardub(){
	last=NULL;
	count=0;
}
bool circulardub::isempty(){
	if(start==NULL)
	return true;
	else
	 return false;
}
int circulardub::getlength(){
	return count;
}

void circulardub::insert(int elem){
	t=new node(elem);
	if(last==NULL){
		last=t;
		last->next=last;
		last->previous=last;
	}
	else{
	
	  t->next=last->next;
	t->previous=last;
	last->next=t;
	last->previous=t;
	last=t;
}
	  }


/*void circulardub::insertbegin(int elem){
	
	t=new node(elem);
	
	t->next=last->next;       //set pointers of new node
	t->previous=last;
	
	q=t->next;
	q->previous=t;       //set pointers of adjacent node
	last->next=t;
	
}*/

void circulardub::insertlast(int elem){
	t=new node(elem);
	t->next=last->next;
	t->previous=last;
	last->next=t;
	last->previous=t;
	last=t;
	
}



/*void circulardub::inbetween(int indi,int elem){
	t=new node(elem);
	temp=last->next;
	int i=1;
	while(i<indi-1){
		temp=temp->next;
		i++;
	}
	q=temp->next;
	
	t->next=temp->next;
	t->previous=temp;        //set pointers of new node
	
	q->previous=t;
	temp->next=t;
	
}

bool circulardub::deletefirst(){
	if(isempty())
	return false;
	else
	 {
	 	temp=last->next;
        q=temp->next;
		last->next=q;
		q->previous=last;
		delete temp;
		return true;	 	
	 }
	
}


bool circulardub::deletelast(){
p=last->next;
q=last->previous;

cout<<p->data<<endl;
cout<<q->data<<endl;
	  
	 
}*/


void circulardub::print(){
	temp=last;
	cout<<"last data"<<last->data;
	
/*	do{
		
		cout<<temp->data<<endl;
		temp=temp->next;
		
	}while(temp!=last->next);*/
}
