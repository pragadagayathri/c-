#include<iostream>
using namespace std;
class details {
	//protected:
	public:
		string name,roll,hall;
};
class eamcet : public details {
	//protected:
	public:
		int emarks;
};
class inter{

	protected:
		int mat,phy,che;
};
class print: public eamcet,public inter {

	float score;
	public:
		void get() {
			cout << "Enter name,roll number, hallticket,marks of maths,physics,chemistry,eamcet marks:";
			cin >> name >> roll >> hall;
			cin >> mat >> phy >> che >> emarks;
		}
		void display() {
			score = emarks*(75/100.0)+(mat+phy+che)*(25/100.0);
			cout << "name\troll number\thall ticket\tmat\tphy\tche\teamcet\tscore"<< endl;
			cout << name << "\t" << roll << "\t" << hall << "\t" << mat << "\t" << phy << "\t" << che << "\t" << emarks << "\t" << score << "\t";
		}
};
int main() {
	print obj;
	obj.get();
	obj.display();
	return 0;
}
