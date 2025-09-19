#include <iostream>
#include <math.h>
using namespace std;
int main() {
double a, b, c, P;
    cout<<"Katet trikutnika a:"<<endl;
    cin>>a;
    cout<<"Katet trikutnika b:"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    P=a+b+c;
    cout<<"Gipotenuza="<<c<<endl;
    cout<<"Perimitr="<<P<<endl;
    return 0;
}