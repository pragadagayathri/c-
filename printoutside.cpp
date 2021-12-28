#include<iostream>
using namespace std;
class print {
	string name;
	public:
		void print_name();
};
void print :: print_name() {
	cout << "Enter name: ";
	cin >> name;
	cout << "name is " << name;
}
main() {
	print p;
	p.print_name();
}
