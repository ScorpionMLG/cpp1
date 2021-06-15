#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cout<<"vvedite pervoe 4islo: ";
	cin>>a;
	cout<<"vtoroe: ";
	cin>>b;
	c=a;
	d=b;
	a=d;
	b=c;
	cout<<"4islo a"<<a<< endl<<"4islo b: "<<b;
	return 0;
}
