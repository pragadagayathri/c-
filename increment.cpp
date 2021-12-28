#include<iostream>
using namespace std;
class inc_dec
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"enter a,b values";
			cin>>a>>b;
		}
		void operator ++()
		{
			a=++a;
		}
		void operator --()
		{
			b=--b;
		}
		void display()
		{
			cout<<"a="<<a;
			cout<<"b="<<b;
		}
};
main()
{
	inc_dec o1;
	o1.getdata();
	++ o1;
	-- o1;
	o1.display();
}
