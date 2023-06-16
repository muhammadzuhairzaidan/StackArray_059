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

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}

		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackArray s;
	char ch;

	while (true)
	{
		cout << endl;
		cout << "\n----Menu Stack----\n" << endl;
		cout << "1. Push \n" << endl;
		cout << "2. Pop \n" << endl;
		cout << "3. Display \n" << endl;
		cout << "4. Exit \n" << endl;
		cout << "Masukkan pilihan (1-4): ";
		cin >> ch;
		switch (ch)
		{
		case '1':
			s.push();
			break;

		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.pop();
			break;

		case '3':
			s.display();
			break;

		case '4':
		{
			exit(0);
		}
		break;

		default:
		{
			cout << "\nInvalid Choice." << endl;
		}
		break;
		}
	}
}