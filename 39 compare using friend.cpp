#include<iostream>
using namespace std;
class B;
class A {
	int a;
	public:
		void getdata() {
			cout << "Enter a value:";
			cin >> a;
		}
	friend void compare(A,B);
};
class B 
{
	int b;
	public:
		void getdata1() {
			cout << "Enter b value:";
			cin >> b;
		}
	friend void compare(A,B);
};
void compare(A o1,B o2) {
	if(o1.a<o2.b) cout << o1.a << " is less than " << o2.b << endl;
	else if(o1.a>o2.b) cout << o1.a << " is greater than " << o2.b<< endl;
	else cout << "both are equal";
}
int main() {
	A o1;
	B o2;
	o1.getdata();
	o2.getdata1();
	compare(o1,o2);
}
