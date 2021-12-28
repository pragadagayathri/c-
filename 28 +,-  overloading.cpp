#include<iostream>
using namespace std;
class op {
	int a,b;
	public:
		void operator +() {
			cout << "Enter a value:";
			cin >> a;
			cout << +a << endl;
		}
		void operator -() {
			cout << "Enter b value:";
			cin >> b;
			cout << -b;
		}
};
int main() {
	op obj;
	+obj;
	-obj;
}
