#include<iostream>
using namespace std;
class print {
	private:
		string name;
	public:
		void getdetails();
};
void print::getdetails() {
	cout << "Enter name:";
	cin >> name;
	cout << "name is:" << name;
}
main() {
	print p1;
	p1.getdetails();
}
