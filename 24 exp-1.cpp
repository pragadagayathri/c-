#include<iostream>
using namespace std;
class distance1 {
	private:
		int feet,inch;
	public:
		void input() {
			cout << "Enter feet and inches:";
			cin >> feet >> inch;
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
};
main() {
	distance1 d1,d2,d3;
	d1.input();
	d2.input();
	d3.add(d1,d2);
	d3.output();
}
