#include<iostream>
using namespace std;
class distance1 {
	private:
		int feet,inch;
	public:
		distance1() {
			
		}
		distance1(int f,int i) {
			feet = f;
			inch = i;
		}
		void add(distance1 d1,distance1 d2) {
			feet = d1.feet+d2.feet;
			inch = d1.inch+d2.inch;
			feet += inch/12;
			inch %=12;
		}
		void output() {
			cout << "feet is " << feet << endl;
			cout << "inch is " << inch << endl;
		}
		~distance1() {
			cout << "destructor is created\n";
		}
};
main() {
	int f1,f2,i1,i2;
	cout << "Enter feet and inch of two objects  ";
	cin >> f1 >> i1 >> f2 >> i2;
	distance1 d1(f1,i1);
	distance1 d2(f1,i2);
	distance1 d3;
	d3.add(d1,d2);
	d3.output();
}
