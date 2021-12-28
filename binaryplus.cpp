#include<iostream>
using namespace std;
class bin_plus
{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"enter a,b values:";
			cin>>a>>b;
		}
		void operator+(bin_plus o4)
		{
			bin_plus temp;
			temp.a=a+o4.a;
			temp.b=b+o4.b;
			cout<<temp.a;
			cout<<temp.b;
		}
};
main()
{
	bin_plus o1,o2;
	o1.input();
	o2.input();
	o1+o2;
}
