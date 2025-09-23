#include <iostream>
#include <cmath>
using namespace std;

void task_1() {
    double a, f;
    cout<<"Vvedit znachenya A="<<endl;
    cin>>a;
    f=a*f;
}


void task_3() {
    double a, b, c;
    cout<<"Vvedit znachenya="<<endl;
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a) {
        cout<<"Mozhna pobuduvaty"<<endl;
    }
    else
        cout<<"Ne mozhlyvo pobuduvaty"<<endl;
}

void task_5() {
    int biletik;
    cout<<"Vvedit shestiznachne chislo="<<endl;
    cin>>biletik;
    int q1=biletik/100000;
    int q2=(biletik/10000)%10;
    int q3=(biletik/1000)%10;
    int q4=(biletik/100)%10;
    int q5=(biletik/10)%10;
    int q6=biletik%10;

    int sum1=q1+q2+q3;
    int sum2=q4+q5+q6;
    if (sum1==sum2) {
        cout<<"Kvitok pizdatiy :3"<<endl;
    }
    else
        cout<<"Pizda tobi :p"<<endl;
}

void task_6() {
    int a;
    cout<<"Vvedit kilkist baliv="<<endl;
    cin>>a;
    if(a<=74 && a>=50) {
        cout<<"Mark E"<<endl;
    }
    else if(a>74 && a<=81) {
        cout<<"Mark D"<<endl;
    }
    else if(a>81 && a<=85) {
        cout<<"Mark C"<<endl;
    }
    else if(a>85 && a<=91) {
        cout<<"Mark B"<<endl;
    }
    else if(a>91 && a<=100) {
        cout<<"Mark A"<<endl;
    }
    else if(a<50) {
        cout<<"You stupid nigger :p"<<endl;
    }
    else if(a>100) {
        cout<<"ty spidoznaya kakashka :p"<<endl;
    };
}

void task_7() {
    int a,b,c,middle;
    cout<<"Vvedit try znachenya="<<endl;
    cin>>a>>b>>c;
    if ((a>=b && a<=c) || (a<=b && a>=c)) {
        middle=a;
    }
    else if ((b>=a && b<=c) || (b<=a && b>=c)) {
        middle=b;
    }
    else
        middle=c;
    cout<<middle<<endl;
}
int main() {
    task_1();
    task_3();
    task_5();
    task_6();
    task_7();
    return 0;
}
