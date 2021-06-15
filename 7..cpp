#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a, b;
	cout<<"vvedite kateti treugolnika: ";
	cin>>a>>b;
	cout<<"gipotenuza: "<< sqrt(a*a + b*b);
	return 0;
}