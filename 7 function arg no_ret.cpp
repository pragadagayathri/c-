#include<iostream>
using namespace std;
void add(int,int);
int main() {
	int a,b;
	cout << "Enter a and b:";
	cin >> a >> b;
	add(a,b);
	return 0;
}
void add(int a,int b) {
	cout << "sum is" << a+b;
}
