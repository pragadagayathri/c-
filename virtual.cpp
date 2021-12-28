#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
};
class B:virtual public A
{
	protected:
		int c,d;
};
class C:virtual public A
{
	protected:
		int e,f;
};
class D:public B,public C
{
	protected:
		int add,sub,mul;
	public:
		void input()
		{
			cout<<"Enter a,b,c,d,e,f values:"<<endl;
			cin>>a>>b>>c>>d>>e>>f;
			add=a+b;
			sub=c-d;
			mul=e*f;
		}
		void display()
		{
			cout<<"Addition="<<add<<endl;
			cout<<"Subtraction="<<sub<<endl;
			cout<<"Multiplication="<<mul<<endl;
		}
};
main()
{
	D o1;
	o1.input();
	o1.display();
}
