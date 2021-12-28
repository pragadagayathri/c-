#include<iostream>
using namespace std;
class op {
	int a;
	public:
		void input() {
			cout << "enter a value:";
			cin >> a;
		}
		void operator ==(op obj) {
			if(a==obj.a) cout << "equal";
			else cout << "not equal";
		}
};
int main() {
	op obj1,obj2;
	obj1.input();
	obj2.input();
	obj1==obj2;
}
