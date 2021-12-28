#include<iostream>
using namespace std;
class binaryop {
	int a,b;
	public:
		void input() {
			cout << "Enter a,b values:";
			cin >> a >> b;
		}
		binaryop operator +(binaryop o2) {
			binaryop temp;
			temp.a = a+o2.a;
			temp.b = b+o2.b;
			return temp;
		}
		void output() {
			cout << a <<" "<< b;
		}
};
int main() {
	binaryop o1,o2,o3;
	o1.input();
	o2.input();
	o3=o1+o2;
	o3.output();
}
