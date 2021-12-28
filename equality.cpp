#include<iostream>
using namespace std;
class equality
{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"enter x,y values";
			cin>>x>>y;
		}
		void operator==(equality o4)
		{
			if(x==o4.x)
			{
				cout<<"equal";
			}
			else if(y==o4.y)
			{
				cout<<"equal";
			}
			else
			{
				cout<<"not equal";
			}
		}
};
main()
{
	equality o1,o2;
	o1.getdata();
	o2.getdata();
	o1==o2;
}
