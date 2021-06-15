#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, d;
    cout<< "vvedite a, b, c: ";
    cin>>a>>b>>c;
    if((b*b-4*a*c)>=0){
        d=(-1*b+sqrt(b*b - 4*a*c))/(2*a);
        cout <<endl<<d<<"\n";
        d=(-1*b-sqrt(b*b - 4*a*c))/(2*a);
        cout<<endl<<d;
    }
    else{
        cout<<"D men'she nul9 ";
    }
    return 0;
}