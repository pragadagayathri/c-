#include<iostream>
using namespace std;
class binary_minus
{
	private:
		int x,y;
	public:
		void operator_(binary_minus o4)
		void display();
};
binaryminus::binaryminus(int a,int b)
{
	x=a;
	y=b;
}
void binaryminus::operator_(binaryminus o4)
{
	binaryminus temp;
	temp.x=x-o4.x
	temp.y=y-o4.y
	cout<<temp.x;
	cout<<temp.y;
	return temp;
}
 void binaryminus::display()
 {
 	 cout<<x;
 	 cout<<y;
 }
 main()
 {
 	binary_minus o1(1,2),o2(3,4);
 	binary_minus o3;
 	o3=o1-o2;
 	o3.display();
 }
