#include<iostream>
using namespace std;
int add(int,int);
int main() {
	int a,b;
	cout << "Enter a and b:";
	cin >> a >> b;
	cout << "Sum is " << add(a,b);
	return 0;
}
int add(int a,int b) {
	return a+b;
}
