#include<iostream>
using namespace std;
class areaofrectangle;
{
 private:
		int area,l,b;
	public:
		void getvalues()
		{
			cout<<"enter land b";
			cin>>l>>b;
		}
		void calculate area()
		{
			area=l*b;
		}
		void print area()
		{
			cout<<area;
		}
};
main()
{
	area a1;
	a1.getvalues();
	a1.calculatearea();
	a1.printarea();
	a2.getvalues();
	a2.calculatearea();
	a2.printarea();
	a3.getvalues();
	a3.calculatearea();
	a3.printarea();
}
