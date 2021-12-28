#include<iostream>
#include<cstring>
using namespace std;
main() {
	char s1[10];
	char s[10];
	int n;
	cout << "Enter string:";
	cin >> s1;
	cout << "Enter number of characters:";
	cin >> n;
	strncpy(s,s1,n);
	cout << "copied string is " << s;
	//cout << s;
}
