#include<iostream>
#include<cstring>
using namespace std;
main() {
	char s1[10];
	char s2[10];
	char *s;
	cout << "Enter string1:";
	cin >> s1;
	cout << "Enter string2:";
	cin >> s2;
	s=strcat(s1,s2);
	cout << s;
}
