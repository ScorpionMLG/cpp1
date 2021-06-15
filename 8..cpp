#include <iostream>
using namespace std;
int main(){
	int n, k, a, b;
	cin>>n>>k;
	a = k /n;
	b = k - (a * n);
	cout<<a<<endl<<b;
	return 0;
}