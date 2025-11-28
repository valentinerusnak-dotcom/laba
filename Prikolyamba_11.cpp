#include <iostream>
#include <ctime>
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
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int *arr = new int[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Mасив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count = 0;
    int *p = arr;

    for (int i = 0; i < n - 1; i++) {
        if (*(p + i + 1) < *(p + i)) {
            count++;
        }
    }

    cout << "Кількість пар, де другий елемент менший за перший: " << count << endl;

    delete[] arr;
}

void task_2() {
    set_ua_locale();
    int n, m;
    cout << "Введіть кількість рядків (n): ";
    cin >> n;
    cout << "Введіть кількість стовпців (m): ";
    cin >> m;

    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    srand(time(NULL));

    cout << "Матриця:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int sideSum = 0;

    if (n == m) {
        for (int i = 0; i < n; i++) {
            int *p = &a[i][m - 1 - i];
            sideSum += *p;
        }
    } else {
        cout << "Неможливо знайти\n";
    }

    int *diag = new int[n];
    for (int i = 0; i < n; i++) {
        int *p = &a[i][i];
        diag[i] = *p;
    }

    cout << "\nСума елементів бічної діагоналі: " << sideSum << endl;

    cout << "Головна діагональ: ";
    for (int i = 0; i < n; i++) {
        cout << diag[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    delete[] diag;
}

void task_4() {
    set_ua_locale();
    int n, m;
    cout << "Введіть кількість рядків (n): ";
    cin >> n;
    cout << "Введіть кількість стовпців (m): ";
    cin >> m;

    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    srand(time(NULL));

    cout << "\nМатриця:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int *result = new int[m];

    for (int col = 0; col < m; col++) {
        int mn = a[0][col];
        int mx = a[0][col];

        for (int row = 1; row < n; row++) {
            if (a[row][col] < mn) mn = a[row][col];
            if (a[row][col] > mx) mx = a[row][col];
        }

        result[col] = mx - mn;
    }

    cout << "\nРізниця (max - min) для кожного стовпця:\n";
    for (int i = 0; i < m; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    delete[] result;

}

int main() {
    task_1();
    task_2();
    // task_3();
    task_4();
    return 0;
}