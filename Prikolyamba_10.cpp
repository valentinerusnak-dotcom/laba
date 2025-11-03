#include <iostream>
#include <ctime>
using namespace std;

void showArray(int arr[], int n) {
    if (n == 0) {
        cout << "Invalid value.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

double averageArray(int arr[], int n) {
    if (n == 0) return 0;
    return (double)sumArray(arr, n) / n;
}

void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertAfterX(int arr[], int &n, int X, int Y) {
    if (n >= 100) {
        cout << "Invalid.\n";
        return;
    }

    int newArr[100];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        newArr[newSize++] = arr[i];
        if (arr[i] == X && newSize < 100) {
            newArr[newSize++] = Y;
        }
    }

    n = newSize;
    for (int i = 0; i < n; i++) arr[i] = newArr[i];
}

void deleteValueX(int arr[], int &n, int X) {
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != X) {
            arr[newSize++] = arr[i];
        }
    }
    n = newSize;
}

int main() {
    srand(time(0));

    int n;
    cout << "Enter size of array (1... 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Vpishi normalniye chisla eblan\n";
        return 0;
    }

    int arr[100];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array generated successfully!\n";
    showArray(arr, n);

    int choice;
    do {
        cout << "\n[ MENU ]\n";
        cout << "-------------------------------\n";
        cout << "1. Show array\n";
        cout << "2. Sum of array elements\n";
        cout << "3. Average of array\n";
        cout << "4. Sort ascending\n";
        cout << "5. Sort descending\n";
        cout << "6. Insert value Y after each X\n";
        cout << "7. Delete element with value X\n";
        cout << "8 Exit\n";
        cout << "-------------------------------\n";
        cout << "Make your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showArray(arr, n);
                break;
            case 2:
                cout << "Sum = " << sumArray(arr, n) << "\n";
                showArray(arr, n);
                break;
            case 3:
                cout << "Average = " << averageArray(arr, n) << "\n";
                showArray(arr, n);
                break;
            case 4:
                sortAscending(arr, n);
                showArray(arr, n);
                break;
            case 5:
                sortDescending(arr, n);
                showArray(arr, n);
                break;
            case 6: {
                int X, Y;
                cout << "Enter Y: ";
                cin >> Y;
                cout << "Enter X: ";
                cin >> X;
                insertAfterX(arr, n, X, Y);
                cout << "Inserted " << Y << " after each " << X << ".\n";
                showArray(arr, n);
                break;
            }
            case 7: {
                int X;
                cout << "Enter X to delete: ";
                cin >> X;
                deleteValueX(arr, n, X);
                cout << "Deleted all occurrences of " << X << ".\n";
                showArray(arr, n);
                break;
            }
            case 8:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "You Invalid\n";
        }

    } while (choice != 0);

    return 0;
}
