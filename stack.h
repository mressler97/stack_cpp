
 /* Name:		Michael Ressler
  * File:		Stack Header
  * Program:		Stack.cpp
  *
  * 
  */

#ifndef STACK_H
#define STACK_H

#define SIZE 40
#define EMPTY -1

class stack {
public:
	stack();
	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	void displayItems();

private:
	int nums[SIZE];
	int top;
};

#endif /* STACK_H */