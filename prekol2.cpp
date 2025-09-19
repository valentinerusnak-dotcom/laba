#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,y;
    cout <<"Enter the value of x:";
    cin>>x;
    y=pow(x,3)-4*pow(x,2)-5*x+9+cos(x);
    cout<<"y="<<y;
    return 0;
}