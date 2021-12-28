#include<iostream>
#include<cstring>
using namespace std;
main() {
	char s1[10];
	char s2[10];
	int n;
	cout << "Enter string1:";
	cin >> s1;
	cout << "Enter string2:";
	cin >> s2;
	if(strcmp(s1,s2)) cout << "Difference" << strcmp(s1,s2);
	else cout << "string are equal";
}
