#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"vvedite kol-vo kletok i zaicev: ";
	cin>>a>>b;
	cout<<"v kletke maximum budet "<<(b+a-1)/a<<" zaicev";
	return 0;
}