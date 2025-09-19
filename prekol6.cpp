#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1, y1, x2, y2, x3, y3;
    double a,b,c,p,P,s;
    cout<<"Vvedit koordinati trox vershin trikutnika:"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    P=a+b+c;
    p=P/2;
    s=sqrt(p * (p - a) * (p - b) * (p - c));;
    cout<<"Perimeter="<<P<<endl;
    cout<<"Ploshcha="<<s<<endl;
    return 0;
}