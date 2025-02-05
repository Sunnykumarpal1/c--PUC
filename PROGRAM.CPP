#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class larray {
    private:
        int a[25], n, pos;
    public:
        void getdata();
        void deletedata();
        void displaydata();
};

void larray::getdata() {
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the position of deletion: ";
    cin >> pos;
}

void larray::deletedata() {
    if (pos > n - 1) {
        cout << "Invalid position";
        exit(0);
    }
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n = n - 1;
}

void larray::displaydata() {
    cout << "\nArray after deletion\n";
    for (int i = 0; i < n; i++)
        cout << "\t" << a[i];
}

int main() {
    larray a;
    a.getdata();
    a.deletedata();
    a.displaydata();
    getch();  // To pause the output in Turbo C++
    return 0;
}