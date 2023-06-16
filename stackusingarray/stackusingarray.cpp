#include <iostream>
#include <string>

using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	stackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "Enter element : ";
		cin >> element;

		if (top == 4) {
			cout << "\nNumber of data exceed the limit" << endl; //step 1
			return;
		}
		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}
