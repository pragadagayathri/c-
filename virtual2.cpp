#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B:virtual public A
{
	protected:
		int b;
};
class C:virtual public A
{
	protected:
		int c;
};
class D:public B,public C
{
	protected:
		int d;
	public:
		void display()
		{
			cout<<"Enter a,b,c,d values:"<<endl;
			cin>>a>>b>>c>>d;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
			cout<<"d="<<d<<endl;
	    }
};
main()
{
	D o1;
	o1.display();
}
