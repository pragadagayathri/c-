#include<iostream>
using namespace std;
class complex {
	float real,imag;
	public:
		complex() { }
		complex(float r,float i) {
			real = r;
			imag = i;
		}
		void display() {
			cout << real << "+i" << imag;
		}
	friend complex operator +(complex&,complex&);
};
complex operator +(complex& a,complex& b) {
	complex temp;
	temp.real = a.real+b.real;
	temp.imag = a.imag+b.imag;
	return temp;
}
int main() {
	complex c1(3,4);
	complex c2(3,4);
	complex c3 = c1+c2;
	c3.display();
}
