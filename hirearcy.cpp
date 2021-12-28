#include<iostream>
using namespace std;
class A {
	protected:
		int a;
};
class B{
	protected:
		int b;
};
class C : public B,public A{
	int c;
	public:
		void input() {
			cout << "Enter values:";
			cin >> a >> b >> c;
		}
		void output() {cout << "a = " << a << "\nb = " << b << "\nc = "<< c;}
};
int main() {
	C obj;
	obj.input();
	obj.output();
	return 0;
}
