#include<iostream>
using namespace std;
class unary
{   
    private:
	int a,b;
	public:
		void input();
		void operator+();
		void operator-();
		void output();
};
    void input()
	{
		cout<<"enter a,b values";
		cin>>a>>b;
	}
	void operator+()
	{
		a=+a;
	}
	void operator-()
	{
		b=-b;
	}
	void unary::output()
	{
		cout<<a;
		cout<<b;
	}
	main()
	{
		unary o1;
		o1.input()
		 +o1
		- o1
		o1.output()
	}

