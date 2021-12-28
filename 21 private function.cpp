#include<iostream>
using namespace std;
class print {
	private:
		string name;
	void getdetails() {
		cout << "Enter name:";
		cin >> name;
		cout << "Name of student: " << name;
	}
	public:
		void getdetail() {
			getdetails();
		}	
};
main() {
	print p1;
	p1.getdetail();
}
