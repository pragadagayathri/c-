#include<iostream>
using namespace std;
int main() {
	int a,b;
	char choice;
	cout << "Enter a,b values:";
	cin >> a >> b;
	cout << "Enter choice: ";
	cin >> choice;
	switch(choice) {
		case '+': cout << "Addition :" << a+b; break;
		case '-': cout << "subtraction :" << a-b; break;
		case '*': cout << "multiplication :" << a*b; break;
		default: cout << "invalid choice";
	}
}
