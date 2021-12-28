#include<iostream> 
using namespace std;
class subject {
	private:
		int s1,s2,s3,s4;
	public:
		void marks() {
			cout << "Enter marks:";
			cin >> s1 >> s2 >> s3 >> s4;
			cout << "total is "<< s1+s2+s3+s4 << endl;
			cout << "average is " << (s1+s2+s3+s4)/4.0;
		}
};
main() {
	subject s1;
	s1.marks();
}
