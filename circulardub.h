#include<iostream>
#include"node.cpp"
class circulardub{
	public:
	circulardub();
	int getlength();
	bool isempty();
	void insert(int a);
	void insertbegin(int b);
   void insertlast(int c);
   void inbetween(int index,int value);
   bool deletefirst();
   bool deletelast();
   
   void print();
	protected:
		 int count;
		 node *last,*t,*temp,*q,*p;
};
