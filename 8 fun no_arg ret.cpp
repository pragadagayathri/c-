#include<iostream>
using namespace std;
int add();
int main() {
	int sum;
	sum = add();
	cout << "sum is " << sum;
	return 0;
}
int add() {
	int a,b;
	cout << "Enter a and b values:";
	cin >> a >> b;
	return a+b;
}
