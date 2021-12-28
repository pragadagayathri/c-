#include<iostream>
using namespace std;
class A {
	protected:
		int name,roll;
	public:
		void get() {
			cout << "Enter name and roll number:";
			cin >> name >> roll;
			cout << "name = " << name << "\nroll number = " << roll << endl;
		}
};
class B: public A{
		int m1,m2;
	public:
		void get1() {
			cout << "Enter two subject marks:";
			cin >> m1,m2;
		}
		void out() {
			cout << "m1= " << 
		}
};
class C : public A{
	int m3 m4;
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
