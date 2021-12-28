#include<iostream>
using namespace std;
class employee {
	int id,sal;
	string name,des;
	public:
		void getdetails() {
			cout << "Enter details:";
			cin >> name >> id >> sal >> des;
			cout << "Name of the employee " << name << endl;
			cout << "ID of the employee " << id << endl;
			cout << "salary of the employee " << sal << endl;
			cout << "designation of the employee " << des << endl;
		}
};
main() {
	employee a,b;
	a.getdetails();
	b.getdetails();
}
