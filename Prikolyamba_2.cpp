#include <iostream>
#include <cmath>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

void set_ua_locale() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    setlocale(LC_ALL, "uk_UA.UTF-8");
}

void task_1() {
    set_ua_locale();
    double a, f;
    cout<<"Введіть значення А="<<endl;
    cin>>a;
    if (a<-2) {
        f=sin(a)+fabs(a);
    } else {
        f=cbrt(a);
    }
    cout<<"f(a)="<<f<<endl;

}

void task_2() {
    int x,f;
    cout<<"Введіть значення х="<<endl;
    cin>>x;
    //Залишу цю задачу до кращих часів
}

void task_3() {
    set_ua_locale();
    double a, b, c;
    cout<<"Введіть значення="<<endl;
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a) {
        cout<<"Можна побудувати"<<endl;
    }
    else
        cout<<"Трикутник неможливо побудувати"<<endl;
}

void task_5() {
    set_ua_locale();
    int biletik;
    cout<<"Введіть шестизначне число="<<endl;
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
        cout<<"Квиток щасливий :3"<<endl;
    }
    else
        cout<<"Пизда тобі :p"<<endl;
}

void task_6() {
    set_ua_locale();
    int a;
    cout<<"Введіть кількість балів="<<endl;
    cin>>a;
    if(a<=74 && a>=50) {
        cout<<"Оцінка E"<<endl;
    }
    else if(a>74 && a<=81) {
        cout<<"Оцінка D"<<endl;
    }
    else if(a>81 && a<=85) {
        cout<<"Оцінка C"<<endl;
    }
    else if(a>85 && a<=91) {
        cout<<"Оцінка B"<<endl;
    }
    else if(a>91 && a<=100) {
        cout<<"Оцінка A"<<endl;
    }
    else if(a<50) {
        cout<<"На перездачу :p"<<endl;
    }
    else if(a>100) {
        cout<<"Перечитай правила :p"<<endl;
    };
}

void task_7() {
    set_ua_locale();
    int a,b,c,middle;
    cout<<"Введіть три значення="<<endl;
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
    set_ua_locale();
    task_1();
    task_2();
    // task_3();
    // task_5();
    // task_6();
    // task_7();
    return 0;
}
