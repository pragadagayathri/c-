#include<iostream>
using namespace std;
int main() {
	int n,size;
	cout << "Enter n values:";
	cin >> n;
	cout << "Enter size of table";
	cin >> size;
	int i;
	for(i=0;i<size;i++) 
		cout << n << "x"<<i<<"="<<n*i<<endl;
	return 0;
}
