#include <iostream>
#include <cmath>
using namespace std;
void task_1() {
    double a, V, S;
    cout<<"a="<<endl;
    cin>>a;
    V=pow(a,3);
    S=6*pow(a,2);
    cout<<"V="<<V<<endl;
    cout<<"S="<<S;
}

void task_2() {
    double x,y;
    cout <<"Enter the value of x:";
    cin>>x;
    y=pow(x,3)-4*pow(x,2)-5*x+9+cos(x);
    cout<<"y="<<y;
}

void task_3() {
    double a, b, c, P;
    cout<<"Katet trikutnika a:"<<endl;
    cin>>a;
    cout<<"Katet trikutnika b:"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    P=a+b+c;
    cout<<"Gipotenuza="<<c<<endl;
    cout<<"Perimitr="<<P<<endl;
}

void task_5() {
    double a, b, c, V, S;
    cout<<"Vvedit dovzhinu a:"<<endl;
    cin>>a;
    cout<<"Vvedit dovzhinu b:"<<endl;
    cin>>b;
    cout<<"Vvedit dovzhinu c:"<<endl;
    cin>>c;
    V=a*b*c;
    S=2*(a*b+a*c+b*c);
    cout<<"Ob'em="<<V<<endl;
    cout<<"Ploshcha poevrhni="<<S<<endl;
}

void task_6() {
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
}

int main() {
    task_1();
    task_2();
    task_3();
    task_5();
    task_6();
    return 0;
}