#include<iostream>
using namespace std;
class addition;
{
	private:
		int a,b,c;
		public:
			void read
			{
				cout<<"enter a and b value";
				cin>>a>>b;
			}
			void calculate addition()
			{
				addition=a+b;
			}
			void display()
			{
				cout<<"addition is"<<c;
			}
};
main()
{
	addition a1;
	a1.read();
	a1.calculate addition();
	a1.display();
}
