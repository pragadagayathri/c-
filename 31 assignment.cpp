#include<iostream>
using namespace std;
class op {
	int a;
	public:
		void input() {
			cout << "Enter a value:";
			cin >> a;
		}
		void operator =(op obj) {
			a=obj.a;
		}
		void output() {
			cout << "a = " << a;
		}
};
main() {
	op obj1,obj2;
	obj1.input();
	obj2=obj1;
	obj2.output();
}
