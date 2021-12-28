#include<iostream>
using namespace std;
class area {
	public:
		void areaof(int r) {
			cout << "area of circle: " << 3.14*r*r << endl;
		}
		void areaof(int l,int b) {
			cout << "area of rectangle: " << l*b << endl;
		}
		void areaof(double h,double b) {
			cout << "area of triangle: " << 0.5*h*b << endl;
		}
};
main() {
	area a1,a2,a3;
	a1.areaof(1);
	a2.areaof(1,2);
	a3.areaof(1.1,2.1);
}
