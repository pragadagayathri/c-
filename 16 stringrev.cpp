#include<iostream>
#include<cstring>
using namespace std;
main() {
	char s1[10];
	char *s;
	cout << "Enter string:";
	cin >> s1;
	s=strrev(s1);
	cout << "reverse string is " << s;  
}
