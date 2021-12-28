#include<iostream>
using namespace std;
class studentdetails
{
	private:
		string name;
		float percentage;
	public:
		void getdetails()
		{
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter percentage:"<<endl;
			cin>>percentage;
		}
		void display()
		{
			cout<<"name="<<name<<endl;
			cout<<"percentage="<<percentage<<endl;
		}
};
class rollnumber
{
	private:
		studentdetails d1;
		int rollnumber;
	public:
		void getnumber()
		{
			d1.getdetails();
			cout<<"Enter number:"<<endl;
			cin>>rollnumber;
		}
		void displaydetails()
		{
			d1.display();
			cout<<"rollnumber="<<rollnumber<<endl;
		}
};
main()
{
	rollnumber r1;
	r1.getnumber();
	r1.displaydetails();
}
