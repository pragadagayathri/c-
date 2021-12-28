#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float image;
	public:
		complex(){}
		complex(float r, float i)
		{
			real=r;
			image=i;
		}
		void display()
		{
			cout<<real<<"+i"<<image;
		}
		friend complex operator+(complex&,complex&);
};
complex operator+(complex&c1,complex&c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.image=c1.image=c2.image;
	return temp;
}
int main()
{
	complex c1(3,4)
	complex c2(4,6)
	complex c3=c1+c2;
	c3.display();
}
