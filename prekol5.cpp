#include <iostream>
#include <math.h>
using namespace std;
int main() {
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
    return 0;
}