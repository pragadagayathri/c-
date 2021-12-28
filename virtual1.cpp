#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public virtual A{
	protected:
		int b;
};
class C:public virtual A{
	protected:
		int c;
};
class D:public B,public C{
	int d;
	public:
		void show(){
			cout<<"enter four numbers:";
			cin>>a>>b>>c>>d;
			cout<<a+b+c+d<<endl;
		}
};
main(){
	D obj;
	obj.show();
}
