#include<iostream>
#include<cstring>
using namespace std;
main() {
	char s1[10];
	char s2[10];
	char s[20];
	int n;
	cout << "Enter string1:";
	cin >> s1;
	cout << "Enter string2:";
	cin >> s2;
	cout << "Enter number of characters:";
	cin >> n;
	s=strncat(s1,s2,n);
	cout << s;
}
