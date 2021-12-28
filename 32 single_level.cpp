#include<iostream>
using namespace std;
class A {
	protected:
		int a;
};
class B : public A{
	int b;
	public:
		void input() {
			cout << "Enter a and b values:";
			cin >> a >> b;
		}
		void output() {
			cout << "a = " << a << "\nb = " << b;
		}
};
int main() {
	B obj;
	obj.input();
	obj.output();
	return 0;
}
