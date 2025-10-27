#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
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

int main() {
    srand(time(0));
    set_ua_locale();
    cout << "Завдання 1\n";
    int n;
    cout << "Введіть розмір масивів: ";
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 13 - 7;  // [-7;5]
        b[i] = rand() % 13 - 7;
        c[i] = min(a[i], b[i]);
    }

    int countNeg = 0;
    for (int x : c)
        if (x < 0) countNeg++;

    cout << "Кількість від'ємних елементів у масиві c: " << countNeg << "\n\n";

    cout << "Завдання 2\n";
    vector<int> X(n);
    for (int i = 0; i < n; i++) X[i] = rand() % 21 - 10;

    double sum = 0;
    for (int x : X) sum += x;
    double avg = sum / n;
    cout << "Середнє арифметичне: " << avg << endl;

    int countGreater = 0;
    for (int x : X)
        if (x > avg) countGreater++;

    cout << "Кількість елементів більших за середнє: " << countGreater << endl;

    int minI = 0, maxI = 0;
    for (int i = 1; i < n; i++) {
        if (X[i] < X[minI]) minI = i;
        if (X[i] > X[maxI]) maxI = i;
    }

    int start = min(minI, maxI) + 1;
    int end = max(minI, maxI);

    if (end - start > 0)
        X.erase(X.begin() + start, X.begin() + end);

    cout << "Новий масив після видалення елементів між мінімальним і максимальним:\n";
    for (int x : X) cout << x << " ";
    cout << "\n\n";

    cout << "Завдання 3\n";
    int n3, m3;
    cout << "Введіть розміри матриці A: ";
    cin >> n3 >> m3;

    vector<vector<double>> A(n3, vector<double>(m3));
    for (int i = 0; i < n3; i++)
        for (int j = 0; j < m3; j++)
            A[i][j] = rand() % 21 - 10;

    double minDiag = A[0][0], maxDiag = A[0][0];
    for (int i = 0; i < min(n3, m3); i++) {
        if (A[i][i] < minDiag) minDiag = A[i][i];
        if (A[i][i] > maxDiag) maxDiag = A[i][i];
    }

    cout << "Різниця між найбільшим і найменшим елементом головної діагоналі = "
         << maxDiag - minDiag << endl;

    bool hasZero = false;
    for (int i = 0; i < min(n3, m3); i++)
        if (A[i][m3 - 1 - i] == 0) hasZero = true;

    if (hasZero) {
        cout << "1-й стовпець матриці:\n";
        for (int i = 0; i < n3; i++) cout << A[i][0] << endl;
    } else {
        cout << "Останній стовпець матриці:\n";
        for (int i = 0; i < n3; i++) cout << A[i][m3 - 1] << endl;
    }
    cout << endl;

    cout << "Завдання 4\n";
    int l, m;
    cout << "Введіть розмір квадратної матриці A (n x m): ";
    cin >> l >> m;

    vector<vector<int>> B(l, vector<int>(m));
    for (int i = 0; i < l; i++)
        for (int j = 0; j < m; j++)
            B[i][j] = rand() % 21 - 10;

    int r1, r2;
    cout << "Введіть номери рядків r1 та r2: ";
    cin >> r1 >> r2;

    int sumRows = 0;
    for (int i = r1 - 1; i < r2 && i < l; i++)
        for (int j = 0; j < m; j++)
            sumRows += B[i][j];

    cout << "Сума елементів рядків з " << r1 << " по " << r2 << ": " << sumRows << "\n\n";

    cout << "Завдання 5\n";
    string name;
    int age;
    cout << "Введіть ім'я: ";
    cin >> name;
    cout << "Введіть вік: ";
    cin >> age;

    int countLetters = name.size();
    cout << "Кількість літер у імені: " << countLetters << endl;

    cout << "Ім'я у зворотному порядку: ";
    for (int i = name.size() - 1; i >= 0; i--)
        cout << name[i];
    cout << endl;

    cout<<age<< " + 10 = " << age + 10 << "\n\n";

    cout << "Завдання 6\n";
    string S;
    cout << "Введіть рядок: ";
    getline(cin, S);

    cout << "Слова з трьома літерами 'a':\n";
    string word;
    for (size_t i = 0; i <= S.size(); i++) {
        if (i == S.size() || S[i] == ' ') {
            int countA = 0;
            for (char ch : word)
                if (ch == 'a' || ch == 'A') countA++;
            if (countA == 3)
                cout << word << endl;
            word = "";
        } else {
            word += S[i];
        }
    }

    return 0;
}
