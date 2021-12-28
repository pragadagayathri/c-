#include<iostream>
using namespace std;
void add();
int main() {
	add();
	return 0;
}
void add() {
	int a,b;
	cout << "Enter a and b values";
	cin >> a >> b;
	cout << "sum is" << a+b;
}
