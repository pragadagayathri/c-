#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	};
	class B:virtual public A
	{
		public:
			int b;
	};
	class C:virtual public A
	{
		public:
			int c;
	};
	class D:public B,public C
	{
		public:
			int d;
			void print()
			{
				cout<<"enter a,b,c,d values";
				cin>>a>>b>>c>>d;
				cout<<"a="<<a<<"b="<<b<<"c="<<c<<"d="<<d;
			}
	 };
	  
	
