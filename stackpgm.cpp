
 /* Name:		Michael Ressler
  * Class:		Programming with C
  * File:   		main.cpp
  * Assignment:		C++ Stack program 
  * Date:		4/04/2019
  */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "stack.h"

int main(int argc, char** argv) {
	stack stk;
	stk.push(2);
	stk.push(1);
	stk.push(4);
	stk.push(32);
	stk.displayItems();
	cout << "popping off one: " << stk.pop() << endl;
	if (!stk.isEmpty()) {
		cout << "popping off another: " << stk.pop() << endl;
	}
	if (stk.isEmpty()) {
		cout << "Stack is now empty\n";
	}
	return 0;
}