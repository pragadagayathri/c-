#include<iostream>
using namespace std;
class addition {
	int a,b,sum;
	public:
		void input() {
			cout << "Enter a and b:";
			cin >> a >> b;
		}
		void add() {
			sum = a+b;
		}
		void output() {
			cout << "sum of the two numbers:" << sum;
		}
};
main() {
	addition a;
	a.input();
	a.add();
	a.output();
	
	
}
