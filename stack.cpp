
 /* Name:		Michael Ressler
  * Class:		CSCI112 Programming with C
  * Assignment:	Practice with Stacks
  * Date:		4/4/2019
  */
#include <iostream>
using namespace std;
#include "stack.h"

stack::stack() {
	top = EMPTY;

}

void stack::push(int num) {
	nums[++top] = num;

}

int stack::pop() {

	return nums[top--];


}

bool stack::isEmpty() {
	if (top == EMPTY) {
		return true;
	}
	else {
		return false;
	}
}

bool stack::isFull() {
	if (top == SIZE) {
		return true;
	}
	else {
		return false;
	}
}

void stack::displayItems() {
	if (!isEmpty()) {
		for (int i = top; i >= 0; --i) {
			cout << "stack element: " << nums[i] << endl;
		}
	}
}