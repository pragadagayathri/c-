#include<iostream>
using namespace std;
class A {
	int a;
	public:
		A(int a1) { a = a1;		}
	friend ostream & operator <<(ostream & print, const A &obj) {
		print << "a is " << obj.a;
		return print;
	}
};
int main() {
	A a1(1);
	cout << a1 ;
	return 0;
}
