#include<iostream>
using namespace std;
int main() {
	int s1,s2,s3,s4,s5,s6;
	float avg;
	cout << "Enter marks of 6 subjects";
	cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
	avg = (s1+s2+s3+s4+s5+s6)/6.0;
	if(avg>=90) cout << "a grade";
	else if(avg<90 && avg >=80) cout << "b grade";
	else if(avg<80 && avg >=70) cout << "c grade";
	else if(avg<70 && avg>=60) cout << "d grade";
	else cout << "f grade";
}
