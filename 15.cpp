#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"vvedite pervoe 4islo a: ";
	cin>>a;
	cout<<"vtoroe b: ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"4islo a: "<<a<< "4islo b: "<<b;
	return 0;
}
