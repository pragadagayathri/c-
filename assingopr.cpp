#include<iostream>
using namespace std;
class assignopr
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"enter a value";
			cin>>a;
		}
		void operator=(assignopr o3)
		{
			a=o3.a;
			cout<<a;
		}
};
main()
{
assignopr o1,o2;
o1.getdata();
o2=o1;
}
